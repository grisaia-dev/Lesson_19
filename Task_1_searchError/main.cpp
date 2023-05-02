#include <iostream>
// using namespace std;  Тут я просто не использую это

struct point {
	double m_x;
	double m_y;
	point(double x, double y) {
		m_x = x;
		m_y = y;  // y = y
	}
};  // Не было точки с запятой

void print_point(const point& point_object) {
	std::cout << "x:" << point_object.m_x << ", y: "
		<< point_object.m_y << std::endl;
}

int main(void)
{
	int i;
	for (i = 0; i < 5; i++) { // ;
		point my_point(i, 2 * i);
		print_point(my_point);
	}
	return 0;
}


// Повторяющийся код
// void print_point(const point& point_object) {
// 	std::cout << "x:" << point_object.m_x << ", y: "
// 		<< point_object.m_y << std::endl;
// }