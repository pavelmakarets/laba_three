#include "Word.h"


Word::Word()
{
	this->developer = PO::developer;
	this->Arial = new Word::Font(this,14);
//	Word::WordCount++;
}


Word::~Word()
{
	delete this->developer;
}

void Word::Create_Document()
{
	cout << "Document Created" << endl;
}

/*void Word::version()
{

}*/

/*int Word::get_fontsize()
{
	
}*/