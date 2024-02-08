#include <iostream>
/**
* ---------------------------------------------------------------------
* @copyright
* Copyright 2024 Michelle Talley University of Central Arkansas
*
* @author: Michelle Talley
* @course: Data Structures (CSCI 2320)
*
* @file main.cpp
* @brief Driver program for Node example
-----------------------------------------------------------------------
*/

struct Node
{
    int data;
    Node *next;
    Node(const int &value) : data(value), next(nullptr) {}
};

int main()
{

    // Create nodes for a linked list
    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);

    // Connect the nodes
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    // Establish a head pointer
    Node *head = n1;

    // Traverse the list and print values
    Node *temp = head;
    while (temp != nullptr)
    {
        std::cout << temp->data << std::endl;
        temp = temp->next;
    }

   // Traverse the list again and delete nodes
    temp = head;
    while (temp != nullptr)
    {
        Node *deleteMe = temp;
        temp = temp->next;
        delete deleteMe;
    }

    return 0;
}


