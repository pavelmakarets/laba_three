#include "Developer.h"
#include "Game.h"
#include "PO.h"
#include "Saper.h"
#include "Textprocess.h"
#include "Virus.h"
#include "Word.h"
#include "Inspector.h"
#include "Printer.h"

void main()
{
	//1a
	//Word::Font* font1 = new Word::Font(new Word(),12);
	//font1->create_doc();

	//1b
	//Word* word1 = new Word();
	//cout<<word1->get_fontsize()<<endl;

	//3
	/*Saper* saper = new Saper();
	cout<<saper->hero<<endl;*/

	//4
	//Virus* virus = new Virus();
	//cout<<virus->get_name()<<endl;

	//5
	//Developer* dev = new Developer("PAVEL");
	//Inspector* inst = new Inspector(dev);
	//Developer* dev1 = new Developer("Nike");
	//cout << get_Developer(dev1)<< endl;

	//6

	//7
	/*Printer* print = new Printer();
	Word* word = new Word();
	print->iAmPrinting(word);
	Game* Saper = new Game();
	print->iAmPrinting(Saper);*/


	//8
	//const_cast
	/*const int a = 15;
	int b;
	b = const_cast<int&>(a);
	cout << b << endl;*/

	//static_cast
	/*Word* word1 = new Word();
	Textprocess* text1;
	text1 = static_cast<Textprocess*>(word1);*/

	//dynamic_cast
	/*Word* word1 = new Word();
	Textprocess* text1;
	text1 = dynamic_cast<Textprocess*>(word1);*/


	system("pause");
}