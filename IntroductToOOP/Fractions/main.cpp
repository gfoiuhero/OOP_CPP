#include <iostream>

class Fraction
{
	int Integer;
	int Denumirator;
	int Numirator;
    public:
		int get_integer() const
		{
			return this->Integer;
		}
		int get_denumirator() const
		{
			return this->Denumirator;
		}
		int get_numerator() const
		{
			return this->Numirator;
		}
		void set_integer(int Integer)
		{
			this->Integer = Integer;
		}
		void set_numerator(int Numerator)
		{
			this->Numirator = Numerator;
		}
		void set_denumerator(int Deumerator)
		{
			if (Denumirator)
			{
				this->Denumirator = Denumirator;
			}
			else
			{
				throw std::exception("aaaaaaaa");
			}
			//this->Denumirator = Denumirator ? Denumirator : 1;
		}
};


void main()
{
	setlocale(LC_ALL, "");
	Fraction A;
	try {
		A.set_integer(2);
		A.set_numerator(3);
		A.set_denumerator(0);
	}
	catch (std::exception e)
	{
		std::cerr << e.what() << std::endl;//возвращает сообщение об ошибке 
	}
}