#include "Computer.h"


Computer::Computer()
{
	BIOS = new Game();
	this->BIOS->next = NULL;
}


Computer::~Computer()
{
}

void Computer::add_PO(PO* element)
{
	if (BIOS->next == NULL)
	{
		BIOS->next = element;
		BIOS->prev = NULL;
		BIOS->next->next = NULL;
		BIOS->next->prev = BIOS;
	}
	else
	{
		element->next =BIOS->next;
		element->prev = BIOS;
		BIOS->next->prev = element;
		BIOS->next = element;
	}
}

void Computer::print_PO()
{
	PO* Head = BIOS->next;
	while (Head != NULL)
	{
		Head->ToConsole();
		Head = Head->next;
	}
	cout << "------------------------------" << endl;
}

void Computer::remove_PO(string name)
{
	PO* Head = BIOS->next;
	while (Head != NULL)
	{
		if (Head->get_name() == name)
		{
			if (Head->next == NULL)
			{
				Head->prev->next = NULL;
				Head->prev = NULL;
				//delete Head;
			}
			else
			{
				Head->prev->next = Head->next;
				Head->next->prev = Head->prev;
			}
		}
		Head = Head->next;
	}
}

void Computer::set_PO(string name,PO* new_)
{
	PO* Head = BIOS->next;
	while (Head != NULL)
	{
		if (Head->get_name() == name)
		{
			new_->next = Head->next;
			new_->prev = Head->prev;
			Head->prev->next = new_;
			Head->next->prev = new_;
		}
		Head = Head->next;
	}
}

PO* Computer::get_PO(string name)
{
	PO* Head = BIOS->next;
	while (Head != NULL)
	{
		if (Head->get_name() == name)
		{
			return Head;
		}
		Head = Head->next;
	}	 
}

void Computer::perebor()
{
	char alphabet[26] = { 'A', 'B', 'C', 'D', 'E',
		'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
		'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
		'X', 'Y', 'Z' };
	string mas[26];
	PO* Head = BIOS->next;
	while (Head != NULL)
	{
		string a = Head->get_name();
		char mas1[10];
		strcpy(mas1, a.c_str());
		for (int j = 0; j < a.length; j++)
		{
			for (int i = 0; i < 26; i++)
			{
				if (mas1[j] == alphabet[i])
				{
					mas[i] = a;
				}
			}
		}
		Head = Head->next;
	}
	for (int i = 0; i < 26; i++)
	{
			cout<<mas[i]<<endl;
	}
}