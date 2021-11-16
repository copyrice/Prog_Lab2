#pragma once
#include <string>
using namespace std;
class Conditioner
{
public:
	~Conditioner();
	Conditioner(); // �����������
	Conditioner(string firm, string model , double weight, int year); // ����������� � �����������
	void setFirm(const string& firm); // �������
	void setWeight(double weight);
	void setYear(int year);
	void setModel(const string& model);
	void setTemp(int temp);
	void setMode(string& mode);
	double getWeight() const; // �������
	double getTemp() const;
	void decreaseTemp();
	void increaseTemp();
	bool modeChecker();
	// ������������ / ��������������:
	void serialize() const;
	void serialize(const string& filename) const;
	void deserialize();
	void deserialize(const string& filename);
	void printInfo() const; // ����� ���������� � ����
private:
	string firm_;
	string model_; 
	double weight_;
	int temp_;
	string mode_; //cooling, heating
	int year_;
};

