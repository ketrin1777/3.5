// 3.5.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Figure
{
public:
	Figure()
	{
		sides_count = 0;
		name = "Фигура";
	};

	int get_sides_count() { return sides_count; };
	std::string get_name() { return name; };

protected:
	int sides_count;
	std::string name;
};

class Triangle: public Figure
{
public:
	Triangle()
	{
		sides_count = 3;
		name = "Треугольник";
	};

private:

};

class Quadrangle : public Figure
{
public:
	Quadrangle()
	{
		sides_count = 4;
		name = "Четырёхугольник";
	};

private:

};

int main()
{
	setlocale(LC_ALL, "Russian");
	Figure figure;
	Triangle triangle;
	Quadrangle quadrangle;
    std::cout << "Количество сторон:\n";
	std::cout << figure.get_name() << ": " << figure.get_sides_count() << std::endl;
	std::cout << triangle.get_name() << ": " << triangle.get_sides_count() << std::endl;
	std::cout << quadrangle.get_name() << ": " << quadrangle.get_sides_count() << std::endl;
}
