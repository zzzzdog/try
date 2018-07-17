#include<iostream>
#include<cmath>
#include<string>
#include<graphics.h>
class heart
{
private:
	int m_n,m_x,m_y;
	COLORREF m_color;
public:
	heart(int a, int b, int c, COLORREF color)
	{
		m_n = a;
		m_x = b;
		m_y = c;
		m_color=color;
	}
	void getshow()
	{
		
		for (double i = -1024; i<1024; i += 0.5)
			for (double j = -768; j < 768; j += 0.5)
			{
				if ((17 * (i*i + j*j) - 16 * abs(i)*(-j) <225*10*m_n))
				{
					putpixel(i + 512+m_x, j + 384+m_y, m_color);
				}
			}
	}
};
int main()
{
	 initgraph(1024, 768);
	 
	 heart h1(100, -50, 50,RED);
	
	 h1.getshow();
	 char a[5]="lift";
	
	system("pause");
	closegraph();
}
