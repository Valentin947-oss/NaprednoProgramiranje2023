#include <iostream>
using namespace std;
//defining the class Shape to demonstrate the concept of Hierarchial Inheritence in CPP
class Shape {
	//protected member variables are only accessible within the class and its descendent
	
protected:

	float width, height;
	//public members are accessible everywhere
public:
	void setDimensions(float w, float h) {
		cout << "Setting the Dimensions using the parent Class: Shape\n";
		cout << "The dimensions are: " << w << " and " << h << "\n\n";
		width = w;
		height = h;
	}
};
//Class Rectangle inherites the Shape class
class Rectangle : 
	public Shape {
	//Method Overriding
public: float plostina() {
	return (width * height);
}
};
//Class Triangle inherites the Shape class
class Triangle : public Shape {
	//Method Overriding
public: float plostina() {
	return (width * height / 2);
}
};
class Rectangle:public Shape {
public:float perimeter() {
	return ((2 * width) + (2 * height));
}
};
class Triangle :public Shape {
public:float perimeter() {
	return(2 * width + height);
}
};
//Defining the main method to access the members of the class
int main() {
	cout << " ===== Program to demonstrate the concept of Hierarchial Inheritence in CPP==== = \n\n";
		//Declaring the Class objects to access the class members
		Rectangle rectangle;
	    Triangle triangle;
	rectangle.setDimensions(94, 7);
	triangle.setDimensions(9, 47);
	cout << "\nArea of the Rectangle computed using Rectangle Class is : " <<rectangle.plostina() << "\n\n\n";
	cout << "Area of the Triangle computed using Triangle Class is: " << triangle.area();
	cout << "\n\n\n";
	cout << "Perimeter of Rectangle is :" << rectangle.perimeter();
	cout << "\n\n\n";
	cout << "Perimeter of Triangle is: " << triangle.perimeter();
	cout << "\n\n\n";
	return 0;

}