#pragma once
#include "Textprocess.h"
#include <string>

class Word:public Textprocess
{
public:
	Word();
	~Word();
	int get_fontsize()
	{
		return this->Arial->get_size();
	}
	void Create_Document();
	void ToConsole()
	{
		cout << Arial << endl;
		cout << Arial->get_size() << endl;
	}
//*************************************
	class Font
	{
		Word* MicrosoftWord;
		int size;
	public:
		Font(Word *word,int size)
		{
			MicrosoftWord = word;
			this->size = size;
		}
		int get_size()
		{
			return this->size;
		}
		void create_doc()
		{
			MicrosoftWord->Create_Document();
		}
	};
//*************************************
private:
	Developer* developer;
	Font* Arial;
};
