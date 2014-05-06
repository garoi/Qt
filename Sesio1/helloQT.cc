#include <QApplication>
#include <QPushButton>
using namespace std;

int main(int argc, char ** argv) {
	QApplication a(argc, argv);
	QPushButton hello("Hello Qt!", 0);
	hello.resize( 150, 30 );
	hello.show();
	return a.exec();
}