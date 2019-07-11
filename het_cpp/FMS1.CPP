/*
	fms
	---

file management system

fstream.h

ofstream  = for output
ifstream  = for input
fstream   = for both

1) ofstream

to create the udf - ofstream udf_name;
to create(open) the file - udf_name.open("file_name/file_path",mode);
to store(print) in the file - udf_name<<"statement";
to close the file - udf_name.close();

2) ifstream

to create the udf - ifstream udf_name;
to create(open) the file - udf_name.open("file_name/file_path",mode);
to scan on the file - udf_name>>variable;
to close the file - udf_name.close();

3) fstream

to create the udf - ofstream udf_name;
to create(open) the file - udf_name.open("file_name/file_path",mode|mode);
to store(print) in the file - udf_name.write();
to scan on the file - udf_name.read()
to close the file - udf_name.close();

eof: end of file
seekg: to get position of current cursor

mode:

write 	ios::out
read    ios::in
append  ios::app
binary  ios::binary


*/

#include<iostream.h>
#include<conio.h>
#include<fstream.h>
class student
{
	public:
		char name[15];
		int no;
};
void main()
{
	student s;
	clrscr();

	cout<<"enter name: ";
	cin>>s.name;
	cout<<"Enter no: ";
	cin>>s.no;
	ofstream fout;
	fout.open("d:\\bhupesh\\het\\mit.dat",ios::app);

	fout<<s.name<<"\t"<<s.no<<endl;
	fout.close();

	ifstream fin;
	fin.open("d:\\bhupesh\\het\\mit.dat",ios::in);
	while(fin.eof()==NULL)
	{
		fin>>s.name>>s.no;
		cout<<"\n\t name= "<<s.name;
		cout<<"\n\t no= "<<s.no;
	}
	fin.close();
getch();
}
