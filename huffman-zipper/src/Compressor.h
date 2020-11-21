#pragma once
#include <iostream>
#include <stdexcept>
#include <fstream>
#include <sstream>
#include <string>
#include <bitset>
#include <chrono>

#include "BinNode.h"
#include "HashMap.h"
#include "PriorityQueue.h"
#include "Constants.h"

class Compressor {
private:
	HashMap<char, int> frequency;
	HashMap<char, std::string> codeMap;
	
	BinNode* rootNode;
	std::string encodedString;
	
	std::ifstream infile;

private:
	void getFrequency();
	BinNode* createHuffmanTree();
	void generateHuffmanCode(BinNode* rootNode, std::string codeString);
	void generateEncodedString();
	
	void writeHeader(std::ofstream& outfile);
	void encodeIntoFile(const std::string& outfileName);
	void deleteTree(BinNode* node);

	void writeTree(std::ofstream& writer, BinNode* head);

public:
	Compressor();
	~Compressor();

	void compressFile(const std::string& infileName);
};
