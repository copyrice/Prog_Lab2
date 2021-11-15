#include "Conditioner.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
Conditioner::Conditioner() : Conditioner("", "", 0, 0)
{
}
Conditioner::Conditioner(string firm, string model, double weight, int year) : 
	temp_(0), firm_(firm), model_(model), weight_(weight), year_(year)
{
}
void Conditioner::setModel(const string& model)
{
	model_ = model;
}
void Conditioner::setFirm(const string& firm)
{
	firm_ = firm;
}
void Conditioner::setWeight(double weight)
{
	weight_ = weight;
}
void Conditioner::setTemp(int temp)
{
	temp_ = temp;
}
void Conditioner::setYear(int year)
{
	year_ = year;
}
void Conditioner::setMode(string& mode)
{
	mode_ = mode;
}
double Conditioner::getTemp() const
{
	return temp_;
}
double Conditioner::getWeight() const
{
	return weight_;
}
void Conditioner::decreaseTemp()
{
	temp_ -= temp_-1;
}

void Conditioner::increaseTemp()
{
	temp_ -= temp_ + 1;
}

bool Conditioner::modeChecker()
{
	if (mode_ == "Cooling") return true;
	if (mode_ == "Heating") return false;
}
void Conditioner::printInfo() const
{
	cout << firm_ << " " << model_ << endl;
	cout << "Year: " << year_ << endl;
	cout << "Weight: " << weight_ << endl;
	cout << "Temperature: " << temp_ << endl;
	cout << "Mode: " << mode_ << endl; //cooling, heating
	
}
void Conditioner::serialize() const
{

	string path="myFile.txt";
	ofstream fout;

	fout.open(path, ofstream::app);

	if (!fout.is_open()) 
	{
		cout << "Error" << endl;
			
	}
	else
	{
		fout << firm_ << endl;
		fout << model_ << endl;
		fout << weight_ << endl;
		fout << temp_ << endl;
		fout << mode_ << endl; //cooling, heating
		fout <<  year_ << endl; 
	}

	fout.close();
}
void Conditioner::serialize(const string& filename) const
{
	
	ofstream fout;

	fout.open(filename, ofstream::app);

	if (!fout.is_open())
	{
		cout << "Error" << endl;

	}
	else
	{
		fout << firm_ << endl;
		fout << model_ << endl;
		fout << weight_ << endl;
		fout << temp_ << endl;
		fout << mode_ << endl; //cooling, heating
		fout << year_ << endl;
	}

	fout.close();
}
void Conditioner::deserialize()
{
	string path = "myFile.txt";
	ifstream fin;

	fin.open(path, ofstream::app);

	if (!fin.is_open())
	{
		cout << "Error" << endl;

	}
	else
	{
		cout << "Файл открыт";
		string str;
		/*string firm;
		string model;
		double weight;
		int temp;
		string mode;
		int year;
		*/
			getline(fin, str);
			firm_ = str;
			getline(fin, str);
			model_ = str;
			getline(fin, str);
			weight_ = atof(str.c_str());
			getline(fin, str);
			temp_ = stoi(str);
			getline(fin, str);
			mode_ = str;
			getline(fin, str);
			year_ = stoi(str);

	}

	fin.close();

}
void Conditioner::deserialize(const string& filename)
{
	
	ifstream fin;

	fin.open(filename, ofstream::app);

	if (!fin.is_open())
	{
		cout << "Error" << endl;

	}
	else
	{
		cout << "Файл открыт";
		string str;
		/*string firm;
		string model;
		double weight;
		int temp;
		string mode;
		int year;
		*/
		getline(fin, str);
		firm_ = str;
		getline(fin, str);
		model_ = str;
		getline(fin, str);
		weight_ = atof(str.c_str());
		getline(fin, str);
		temp_ = stoi(str);
		getline(fin, str);
		mode_ = str;
		getline(fin, str);
		year_ = stoi(str);

	}

	fin.close();

}