/*========================================================================
Michael A. Bramer
CECS 130-02
Lab 10
=========================================================================*/
#include <iostream>
using namespace std;
class Room
{
	private:
		double length;
		double width;
		double height;
	public:
		Room( double myLength, double myWidth, double myHeight)
	{
		cout << "New Room Created" << endl;
		length = myLength;
		width = myWidth;
		height = myHeight;
	} 	
	void setLength( double);
	void setWidth( double );
	void setHeight( double ); 
	double getLength();
	double getWidth();
	double getHeight();
	void setRoomDim( double, double, double);
	void printRoomDim();  
	double floorArea();
	double surfaceArea();
	double roomVolume();
};
void Room::setLength( double myLength)
{
	length = myLength;
}
void Room::setWidth( double myWidth)
{
	width = myWidth;
}
void Room::setHeight( double myHeight)
{
	height = myHeight;
}
double Room::getLength()
{
	return length;
}
double Room::getWidth()
{
	return width;
}
double Room::getHeight()
{
	return height;
}
double Room::floorArea()
{
	return length*width;
}
double Room::surfaceArea()
{
	return 2*floorArea()+ 2*height*width+ 2*height*length;
}
double Room::roomVolume()
{
	return length*width*height;
}
void Room::printRoomDim()
{
	cout << "The room dimensions are: " << endl;
	cout << "Length = "<< getLength() << endl;
	cout << "Width  = " << getWidth() << endl;
	cout << "Height = " << getHeight() << endl;
}
int main()
{
	//Create a living room
	cout << "Make a play room" << endl;
	Room playRoom = Room(10,5,8);
	//Show dimensions
	playRoom.printRoomDim();
	
	cout << "My room changes dimesions" << endl;
	//Individually change the dimensions
	playRoom.setLength(20);
	playRoom.setWidth(10);
	playRoom.setHeight(12);
	//Individually print the values
	cout << "Checking the changes" << endl;
	cout << "Length = " << playRoom.getLength() << endl;
	cout << "Width  = " << playRoom.getWidth() << endl;
	cout << "Height = " << playRoom.getHeight() << endl;
	
	cout << "Checking the dimensions again" << endl;
	//Print the values all at once
	playRoom.printRoomDim();
    
    
	//Print the area
	cout << endl;
	cout << "Floor Area " << endl;
	cout << "Floor Area of Play Room = " << playRoom.floorArea() << endl;
    
    
	//Print the surface area
	cout << endl;
	cout << "Surface Area " << endl;
	cout << "Surface area of Play Room = "<< playRoom.surfaceArea() << endl;
	
	//Print the Volume
	cout << endl;
	cout << "Volume " << endl;
	cout << "Volume of Play Room = "<< playRoom.roomVolume() << endl;
    
    string y;
    cin >> y;
    
	return 0;
}


