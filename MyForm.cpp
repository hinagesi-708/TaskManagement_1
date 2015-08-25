#include "MyForm.h"

using namespace TaskManagement_1;

[STAThreadAttribute]
int main() {
	MyForm ^fm = gcnew MyForm();
	fm->ShowDialog();
	return 0;
}
