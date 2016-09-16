#pragma once
#include "Textprocess.h"
#include <string>

class Word:public Textprocess
{
public:
	Word();
	~Word();
private:
	Developer developer;

	/*enum Fonts
	{
		Arial,
		Calibri,
		Times_New_Roman,
		Lucida_Console
	};*/

	class Font
	{
		char fonts[4][16] = {
			"Arial",
			"Calibri",
			"Times New Roman",
			"Lucida Console"
		};
		std::string font;
		int size;
	public:
		std::string getfont()
		{
			return this->font;
		}
		void setfont(std::string font)
		{
			for (int i = 0; i < 4; i++)
			{
				if (fonts[i] == font)
				{
					this->font = font;
				}
			}
		}
		int getsize()
		{
			return this->size;
		}
		void setsize(int size)
		{
			this->size = size;
		}
	};

	Font font;
};

