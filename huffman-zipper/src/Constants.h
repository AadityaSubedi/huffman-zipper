#pragma once

// Constants for HashMap
constexpr auto INITIAL_BUCKET_COUNT = 101;
constexpr auto MAX_LOAD_PERCENTAGE = 70;

// Constants for MinHeap
constexpr auto RESERVE_SIZE = 101;

// Constants for Queue
const int INITIAL_QUEUE_CAPACITY = 5;

// Constants for Huffman Tree
constexpr auto INTERNAL_NODE_CHARACTER = char(29);		// group separator	: GS

// Constants for file Header
constexpr auto FILE_NAME_SEPARATOR = char(63);			// Question mark	: ?

// File locations
constexpr auto INPUT_FILE_PATH = "./src/small-text.txt";
constexpr auto COMPRESSED_FILE_PATH = "./src/small-text.huf";
constexpr auto DIRECTORY = "./src/huffman/";