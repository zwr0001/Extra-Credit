
#include "Graph.h"

#include <string>

Graph::Graph()
{
	TheList = new AdjacencyList;
	EdgeList = new AdjacencyList;
	TheList->head = NULL;
	TheList->rear = NULL;
	EdgeList->head1 = NULL;
	EdgeList->rear1 = NULL;
	TheList->count = 0;
	EdgeList->EdgeListCount = 0;
	graphsize = 2;
	AddVertex("a");
	AddVertex("b");
	AddVertex("c");
	AddVertex("d");
	AddVertex("e");
	AddVertex("f");
	AddVertex("g");
}

void Graph::MakeEmpty()
{
	if (TheList->head == NULL)
	{
		return;
	}
	AdjacencyListNode* Temp = TheList->head;
	AdjacencyListNode* Temp2 = Temp;
	while (Temp->next != NULL)
	{
		while (Temp2->edge != NULL)
		{
			Temp2 = Temp2->edge;
			if (Temp2->edge = NULL)
			{
				Temp2->previousedge->edge = NULL;
				delete Temp2;
				Temp2 = Temp;
			}
		}
		Temp = Temp->next;
		if (Temp->next != NULL)
		{
			Temp->previous->next = NULL;
			delete Temp;
			Temp = TheList->head;
		}
	}
	delete Temp;
	TheList->head = NULL;
	TheList->rear = NULL;
	TheList->count = 0;
	EdgeListNode* Temp1 = EdgeList->head1;
	while (Temp1 != NULL)
	{
		Temp1 = Temp1->next;
		delete EdgeList->head1;
	}

	AddVertex("a");
	AddVertex("b");
	AddVertex("c");
	AddVertex("d");
	AddVertex("e");
	AddVertex("f");
	AddVertex("g");
	EdgeList->EdgeListCount = 0;
}

bool Graph::AddEdge(std::string source, std::string destination, int weight)
{
	if (TheList->head == NULL)
	{
		//std::cout << "Please add a Vertex First" << std::endl;
		//system("pause");
		return false;
	}
	if (source == destination)
	{
		//Form->label26->Text == "The source vertex can not be the destination vertex"//std::cout << "The source vertex can not be the destination vertex" << std::endl;
		//system("pause");
		return false;
	}
	AdjacencyListNode* Temp = TheList->head;
	AdjacencyListNode* Temp2 = Temp;
	bool looper = true;
	bool check = false;
	while (looper)
	{
		if (Temp->name == source)
		{
			looper = false;
			while (!check)
			{
				if (Temp2->name != destination)
				{
					Temp2 = Temp2->next;
				}
				if (Temp2 == NULL)
				{
					//std::cout << "Destination vertex not found" << std::endl;
					//system("pause");
					return false;
				}
				if (Temp2->name == destination)
				{
					check = true;
				}
			}

			while (Temp->edge != NULL)
			{
				Temp = Temp->edge;
				if (Temp->name == destination)
				{
					//std::cout << "Edge already exists" << std::endl;
					//system("pause");
					return false;
				}
			}
			
			EdgeListNode* Temp21 = EdgeList->head1;
			if (EdgeList->head1 != NULL)
			{
				while (Temp21 != NULL)
				{
					if (((Temp21->destination == destination)&(Temp21->source == source)) || ((Temp21->destination == source)&(Temp21->source == destination)))
					{
						return false;
					}
					Temp21 = Temp21->next;
				}
				EdgeList->rear1->next = new EdgeListNode;
				Temp21 = EdgeList->rear1->next;
				Temp21->previous = EdgeList->rear1;
				Temp21->next = NULL;
				EdgeList->rear1 = Temp21;
			}
			if (EdgeList->head1 == NULL)
			{
				EdgeList->head1 = new EdgeListNode;
				EdgeList->rear1 = EdgeList->head1;
				EdgeList->head1->source = source;
				EdgeList->head1->destination = destination;
				EdgeList->head1->weight = weight;
				EdgeList->head1->previous = NULL;
				EdgeList->head1->next = NULL;
			}
			
			EdgeList->rear1->destination = destination;
			EdgeList->rear1->source = source;
			EdgeList->rear1->weight = weight;
			EdgeList->EdgeListCount += 1;

			Temp->edge = new AdjacencyListNode;
			Temp->edge->previousedge = Temp->edge;
			Temp = Temp->edge;
			Temp->name = destination;
			Temp->edge = NULL;
			Temp->weight = weight;
		}

		if (Temp->next == NULL&& !check)
		{
			looper = false;
			//std::cout << "Source Vertex not found" << std::endl;
			//system("pause");
			return false;
		}
		if (Temp->next != NULL&& !check)
		{
			Temp = Temp->next;
		}
		
	}



	return true;
}

void Graph::AddVertex(std::string vertice)
{
	bool check = false;
	bool looper = true;
	AdjacencyListNode* Temp = TheList->head;
	if (TheList->count == 10)
	{
		//std::cout << "Too Many Vertices. Vertex Not Added." << std::flush;
		system("pause");
		return;
	}

	if (TheList->head == NULL)
	{
		TheList->head = new AdjacencyListNode;
		TheList->rear = TheList->head;
		TheList->head->name = vertice;
		TheList->head->next = NULL;
		TheList->head->previous = NULL;
		TheList->rear->edge = NULL;
		TheList->rear->VisitTime = 0;
		TheList->count = TheList->count + 1;
		return;
	}

	while (looper)
	{
		if (Temp->name == vertice)
		{
			looper = false;
			check = true;
		}

		if (Temp->next == NULL)
		{
			looper = false;
		}
		if (Temp->next != NULL)
		{
			Temp = Temp->next;
		}
	}

	if (TheList->head != NULL&& check == false)
	{
		TheList->rear->next = new AdjacencyListNode;
		TheList->rear->next->previous = TheList->rear;
		TheList->rear = TheList->rear->next;
		TheList->rear->name = vertice;
		TheList->rear->next = NULL;
		TheList->rear->edge = NULL;
		TheList->rear->VisitTime = 0;
		TheList->count = TheList->count + 1;
	}
}


//BubbleSort
void Graph::SortEdgeList()
{
	EdgeListNode* Temp;
	EdgeListNode* Temp1;
	for (int j = 0; j < EdgeList->EdgeListCount+30; j++)
	{
		Temp = EdgeList->head1;
		for (int k = 0; k < EdgeList->EdgeListCount; k++)
		{
			if (Temp->next != NULL)
			{
				if (Temp->next->weight < Temp->weight)
				{
					Temp1 = new EdgeListNode;
					Temp1->weight = Temp->next->weight;
					Temp1->source = Temp->next->source;
					Temp1->destination = Temp->next->destination;

					Temp->next->weight = Temp->weight;
					Temp->next->source = Temp->source;
					Temp->next->destination = Temp->destination;

					Temp->weight = Temp1->weight;
					Temp->source = Temp1->source;
					Temp->destination = Temp1->destination;

					Temp = Temp->next;
					delete Temp1;
				}
			}
		}
	}
	for (int j = 0; j < EdgeList->EdgeListCount + 30; j++)
	{
		Temp = EdgeList->head1;
		for (int k = 0; k < EdgeList->EdgeListCount; k++)
		{
			if (Temp->next != NULL)
			{
				if (Temp->next->weight < Temp->weight)
				{
					Temp1 = new EdgeListNode;
					Temp1->weight = Temp->next->weight;
					Temp1->source = Temp->next->source;
					Temp1->destination = Temp->next->destination;

					Temp->next->weight = Temp->weight;
					Temp->next->source = Temp->source;
					Temp->next->destination = Temp->destination;

					Temp->weight = Temp1->weight;
					Temp->source = Temp1->source;
					Temp->destination = Temp1->destination;

					Temp = Temp->next;
					delete Temp1;
				}
			}
		}
	}
	return;
}
//returning false means no cycle
bool Graph::KruskalsTree(std::string source, std::string destination)
{
	bool check1 = false;
	bool check2 = false;
	bool check3 = false;
	bool check4 = false;

	AdjacencyListNode* Temp = TheList->head;

	while (!check1 && !check2)
	{
		if (Temp->name == source)
		{
			if (Temp->VisitTime == 1)
			{
				check1 = true;//maybe cycle
			}
			else {
				Temp->VisitTime = 1;
				check2 = true;  //definately no cycle
				}
		}
		Temp = Temp->next;
	}
	Temp = TheList->head;
	while (!check3 && !check4)
	{
		if (Temp->name == destination)
		{
			if (Temp->VisitTime == 1)
			{
				check3 = true; //Definately Cycle
			}
			else {
				Temp->VisitTime = 1;
				check4 = true; //Definately No Cycle
			}
		}
		Temp = Temp->next;
	}
	if (check1 && check3)
	{
		return true;
	}
	return false;
}
