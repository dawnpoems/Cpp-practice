#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &materiaSource)
{
	*this = materiaSource;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &materiaSource)
{
	if (this != &materiaSource)
	{
		this->deleteMaterias();
		for (int i = 0; i < 4; i++)
		{
			if (materiaSource.materias[i])
				this->materias[i] = materiaSource.materias[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	this->deleteMaterias();
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->materias[i])
		{
			this->materias[i] = materia;
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i] && this->materias[i]->getType() == type)
			return this->materias[i]->clone();
	}
	return NULL;
}

void MateriaSource::deleteMaterias()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
		this->materias[i] = NULL;
	}
}
