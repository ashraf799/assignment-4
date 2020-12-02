/*
Name: Ashraf Omer Obied Ali
Class: Second Class
Department: Computer
*/
    #include<iostream>
    #include<windows.h>
    using namespace std;
    #define pi 3.141592654
    #define full 2.0
     
    int square(int x)
    {
    return x*x;
    }
    
    // class
    class Area{
     
        int X,Y;    //taking two numbers data members
        public:
        Area(int x,int y):X(x),Y(y){} //constructor with two numbers
        //functions
        float circle(int x,int y)    //for area of the circle
        {
            cout<<"Area of the Circle is :";
            return pi*square(x);
        }
     
        float rectangle(int l,int w) //for area of the rectangle
        {
            cout<<"Area of the Rectangle is :";
            return l*w;
        }
     
        float triangle(int b,int h)  //for area of the triangle
        {
            cout<<"Area of the Triangle is :";
            return (b*h)/full;
        }
        float square(int a)          //for  area of the square
        {
        	cout<<"Area of the square is :";
        	return (a*a);
        }
        float ellipse(int f,int g)  //for area of the ellipse
        {
        	cout<<"Area of the ellipse is :";
        	return (pi*f*g);
		}
		float Polygon(int p,int r) //for area of the polygon
		{
			cout<<"Area of the polygon is :";
			return (p*r*2.5);
		}
		float shape(int f,int g)  //for area of the shape
        {
        	cout<<"Area of the shape is :";
        	return (pi*f*g);
		}
        
    }; //class end
     
    // main code
    int main(void)
    {
        int first,second,choice;
        cout<<"*****In Square Case We Will Take The First Number To Solve*****\n\n";
        cout<<"*****And In Polygon Case First Number Is Perimeter And The Second Is Apothem*****\n\n";
        cout<<"Enter Your Two Numbers Down\n\n";
        cout<<"First Number :";cin>>first;
        cout<<"Second Number :";cin>>second;
        system("cls");
        Area instance(first,second);// set the value by pass to the constructor of the object called instance
     
        while (1) {    // loop for infinite running expect when 4 is pressed which is terminating case 
     
                    cout << "\n\n<<<<<<<<<<<<< Basic Options >>>>>>>>>>>>>>\n\n " << endl
                    << "      Press 1. Area of Circle " << endl
                    << "      Press 2. Area of Rectangle" << endl
                    << "      Press 3. Area of Triangle" << endl
                    << "      press 4. Area of Square" << endl
                    << "      press 5. Area of ellipse" << endl
                    << "      press 6. Area of polygon" << endl
                    << "      press 7. Area of shape" << endl
                    << "      Press 8. To Exit " << endl
                    << "------------------------------- " << endl
                    << "Your Choice :"; 
            cin>>choice;
            switch(choice){//switch        
                case 1:
                cout<<instance.circle(first,second);//passing by value the function for area of circle by the object        
                break;
                case 2:
                cout<<instance.rectangle(first,second);// same for the other functions
                break;
                case 3:
                cout<<instance.triangle(first,second);   
                break;
                case 4:
                cout<<instance.square(first);
                break;
                case 5:
                cout<<instance.ellipse(first,second);
                break;
                case 6:
                cout<<instance.Polygon(first,second);
                break;
                case 7:
                cout<<instance.shape(first,second);
                break;
                case 8:
                exit(1);    //to escpae from while and terminate
                break;
                default:
                cout<<"\n\n\n\nWrong Input Please Enter Again\n\n\n\n";// for wrong inputs
            }
        }
        return 0;
    }//code end
