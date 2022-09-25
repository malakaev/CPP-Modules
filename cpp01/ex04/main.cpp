#include <iostream>
#include <string>
#include <fstream>

void ft_replace(std::string &s1, std::string &s2, std::string &fileName, std::ifstream &originalFile) {
	std::string		strBuf;
	size_t			pos;
	std::string		tmp;
	std::ofstream	newFile(fileName + ".replace");

	if (!newFile.is_open()) {
		std::cout << "Error: cannot write to " << fileName + ".replace" << std::endl;
		std::cout << "Please, check the file access rights" << std::endl;
		return ;
	}

	while (!originalFile.eof()) {
		getline (originalFile, strBuf);
		while (strBuf.find(s1, pos) != std::string::npos) {
			pos = strBuf.find(s1, pos);
			tmp.append(strBuf.substr(0, pos));
			tmp.append(s2);
			std::string tmpapp = strBuf.substr(pos + s1.length());
			tmp.append(tmpapp);
			strBuf = tmp;
			tmp.clear();
			pos = pos + s2.length();
		}
		newFile << strBuf;
		pos = 0;
		if (!originalFile.eof())
			newFile << std::endl;
	}
	newFile.close();
}

int main(int argc, char **argv) {
	std::string		fileName, s1, s2;
	std::ifstream	originalFile(fileName);

	if (argc != 4) {
		std::cout << "Error: need 3 arguments, filename, string1 and string2" << std::endl;
		return 1;
	}
	fileName = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (s1.empty()) {
		std::cout << "Error: string1 cannot be empty" << std::endl;
		return 1;
	}
	originalFile.open(fileName);
	if (!originalFile.is_open()) {
		std::cout << "Error: cannot open file" << std::endl;
		return 1;
	}
	else
		ft_replace(s1, s2, fileName, originalFile);
	originalFile.close();
	return 0;
}
