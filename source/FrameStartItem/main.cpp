#include <QApplication>
#include <QPluginLoader>
#include <QDir>
#include <QDebug>
#include <QFontDatabase>
#include <QResource>
#include <QIcon>
int main(int argc,char *argv[]) {
	QApplication application(argc, argv);
	application.setApplicationName("¿ò¼Ü¹ÜÀíÈí¼þ");

	QFile qss_file(":/file/tjt_software.qss");
	if (qss_file.open(QFile::ReadOnly))
	{
		qApp->setStyleSheet(qss_file.readAll());
		qss_file.close();
	}
	return 0;
}