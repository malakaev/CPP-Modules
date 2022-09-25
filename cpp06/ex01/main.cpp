#include <iostream>
#include <fstream>

// stucture and serialize funcs for test 1 and 2
struct Data
{
	std::string name;
	int age;
};

uintptr_t serialize(Data * ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data * deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

// stucture and serialize funcs for test 3
struct DataChar
{
	char ch;
};

uintptr_t serialize2(DataChar * ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

DataChar * deserialize2(uintptr_t raw)
{
	return reinterpret_cast<DataChar*>(raw);
}

// functions for tests

void test1(Data data, std::string fileName)
{
	std::cout << std::endl;
	std::cout << "Values of data to serialize:" << std::endl;
	std::cout << "Name: " << data.name << std::endl;
	std::cout << "Age: " << data.age << std::endl;

	int sizeV = sizeof(data);
	uintptr_t x = serialize(&data);
	std::cout << "sizeof data = " << sizeV << std::endl;

	// запись в бинарный файл чтобы увидеть данные в сериализованном виде (ввести в терминале hexdump filename)
	std::ofstream of(fileName, std::ios_base::out | std::ios_base::binary);

	// char * buff = reinterpret_cast<char*>(&data);
	// of.write(buff, sizeV);
	of.write((char*)x, sizeV);

	std::cout << std::endl;
	std::cout << "Adr of serialized data = 0x" << std::hex << x << std::dec << std::endl;
	std::cout << "Adr of x = " << &x << std::endl;
	std::cout << "Call to desirialize " << std::endl;

	Data * copy = deserialize(x);

	std::cout << "Desirialized data:" << std::endl;
	std::cout << "Name: " << copy->name << std::endl;
	std::cout << "Age: " << copy->age << std::endl;
	std::cout << "\nTo view data use hexdump: " << fileName << std::endl;
}

void test2(DataChar data)
{
	std::cout << std::endl;
	std::cout << "value of data to serialize = " << data.ch << std::endl;

	uintptr_t x = serialize2(&data);

	// ******// запись в бинарный файл test3 чтобы увидеть данные в сериализованном виде (ввести в терминале hexdump test3)
	std::ofstream of("test3", std::ios_base::out | std::ios_base::binary);
	// std::ofstream of("test.txt");
	// char value = 1;
	int sizeV = sizeof(data);
	std::cout << "sizeof data = " << sizeV << std::endl;

	char* buff = reinterpret_cast<char*>(&data);
	of.write(buff, sizeV);

	//****//

	std::cout << std::endl;
	std::cout << "Adr of serialized data = 0x" << std::hex << x << std::hex << std::endl;
	std::cout << "Adr of x = " << &x << std::endl;
	std::cout << "Call to desirialize " << std::endl;
	DataChar* copy = deserialize2(x);
	std::cout << "Desirialized data = " << copy->ch << std::endl;
	std::cout << "\nTo view data use hexdump test3." << std::endl;
}


int main()
{
	Data data;

	std::cout << "\n=======================\n\tTEST 1" << std::endl;
	data.name = "Rainbow";
	data.age = 32;
	test1(data, "test1");

	std::cout << "\n=======================\n\tTEST 2" << std::endl;
	data.name = "R";
	data.age = 127;
	test1(data, "test2");

	std::cout << "\n=======================\n\tTEST 3" << std::endl;
	DataChar dataCh;
	dataCh.ch = 'R';
	test2(dataCh);

	return 0;
}
