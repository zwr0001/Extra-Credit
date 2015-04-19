#pragma once
#include <windows.h>
#include <cstdlib>
#include <cstdio>
#include <stdio.h>
#include <string>

struct AdjacencyListNode
{
	AdjacencyListNode* next;
	AdjacencyListNode* previous;
	AdjacencyListNode* edge;
	AdjacencyListNode* previousedge;
	std::string name;
	int weight;
	int VisitTime;

};

struct EdgeListNode
{
	EdgeListNode* next;
	EdgeListNode* previous;
	int weight;
	std::string source;
	std::string destination;
};

struct AdjacencyList
{
	AdjacencyListNode* head;
	AdjacencyListNode* rear;
	EdgeListNode* head1;
	EdgeListNode* rear1;
	int count;
	int EdgeListCount;
};


class Graph
{
public:
	Graph();
	int graphsize;

	void MakeEmpty();

	bool AddEdge(std::string source, std::string destination, int weight);
	void AddVertex(std::string vertice);

	void SortEdgeList();

	bool KruskalsTree(std::string source, std::string destination);
	AdjacencyList* TheList;
	AdjacencyList* EdgeList;
	//int count;


};