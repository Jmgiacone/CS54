/*
 * Name: GIACONE, JORDAN
 * Date: 10/2/13
 * Class and Section: CS54, Section E
 * Description: Prompts the user for a circle, then tests if 3 points lie on 
   or within said circle. 
 */

#include <iostream>
#include <cmath>

using namespace std;

struct Point
{
  float m_x, m_y;
};

struct Circle
{
  Point m_centerPoint;
  float m_radius;
};

/*
 * Purpose: To query the user for center point and radius of a circle  
 * Pre: None
 * Post: Text is output to the screen and circle is changed directly
 * Param: circle - The circle to be directly defined
 * Return: None
 */
void defineCircle(Circle& circle);

/*
 * Purpose: To query the user for the X and Y coordinates of a Point  
 * Pre: None
 * Post: Text is output to the screen
 * Param: None
 * Return: The X and Y coordinates condensed into a Point object
 */
Point definePoint();

/*
 * Purpose: To determine if a certain point lies on or inside of a given circle 
 * Pre: p and circle must be set
 * Post: None
 * Param: 
     - p: The point to be tested
     - circle: The circle to be tested upon
 * Return: True or False dependent on if the point lies on or within the circle
 */
bool isInCircle(const Point p, const Circle circle);

int main()
{
  Circle circle;
  Point point;
  
  cout << "\n---Define Circle---" << endl;
  defineCircle(circle);

  cout << endl;

  for(int i = 0; i < 3; i++)
  {
    cout << "--Define Point " << i + 1 << "--" << endl;
    point = definePoint();
 
    cout << "The Point (" << point.m_x << ", " << point.m_y << ") is"
         << (isInCircle(point, circle) ? "" : " not") << " in the circle\n" 
         << endl;     
  }

  return 0;
}

void defineCircle(Circle& circle)
{
  circle.m_centerPoint = definePoint();

  do
  {
    cout << "Please enter a radius for this circle: ";
    cin >> circle.m_radius;

    if(circle.m_radius <= 0)
    {
      cout << "That is invalid. A radius must be greater than 0" << endl;
    }
  }while(circle.m_radius <= 0);
}

Point definePoint()
{
  Point p;
  
  cout << "Please enter a X-Coordinate for this point: ";
  cin >> p.m_x;
  cout << "Please enter a Y-Coordinate for this point: ";
  cin >> p.m_y;

  return p;
}

bool isInCircle(Point p, Circle circle)
{
  //Formula: R^2 >= (X-A)^2 + (Y-B)^2
  
  return pow(circle.m_radius, 2) >= pow((p.m_x - circle.m_centerPoint.m_x), 2) 
           + pow((p.m_y - circle.m_centerPoint.m_y), 2);
}

//BONUS COMMENT

/*
My opinion of the lab assignments is that they are easy. 
However, I have had very in-depth programming experience in the past, 
and therefore, this is all review for me. Sometimes, the assignments can be a 
wee bit long, but that only makes it more fun to code. When it comes to the 
grading scale, I feel that automatic zeroes and 50% deductions are a little 
harsh. If someone submits an assignment a single minute too late, they shouldn't automatically be docked 50%. As for automatic zeroes, I feel that if they 
screw up COLOSSULLY (I'm talking 500 page infinite loop), then they deserve an 
automatic zero just for wasting so much paper and time. Finally, the suggestions that I have are for the convention and implementation to be a little bit more 
lenient. For exaple, I wanted to change the defineCircle() function to return a Circle object instead of passing in a blank variable by reference. I understand that the point of this is to reinforce the whole pass-by-reference idea, but for someone like me, this is bad code. It doesn't really make sense from a 
practical standpoint. As a coder, I am very nitpicky about convention and doing things as smoothly as possible. When I see something that I think that I can do better, I try to fix it. It will bug me for a while If I am unable to fix it. 
Anyway, you all are doing a great job and I definitely appreciate everything 
that you do. Keep up the good work!
*/
