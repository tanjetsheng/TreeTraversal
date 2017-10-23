#include "unity.h"
#include "Traversal.h"
#include "Node.h"
#include "NodePrint.h"

Node node1={NULL,NULL,1};
Node node3={NULL,NULL,3};
Node node7={NULL,NULL,7};
Node node24={NULL,NULL,24};
Node node28={NULL,NULL,28};
Node node2={&node1, &node3,2};
Node node5={NULL, &node7,5};
Node node15={NULL,NULL,15};
Node node25={&node24, &node28,25};
Node node4={&node2, &node5,4};
Node node20={&node15, &node25,20};
Node node10={&node4, &node20,10};

StringNode nodeAli ={NULL,NULL,"ali"};
StringNode nodeabu ={NULL,NULL,"abu"};
StringNode nodeDavid ={NULL,NULL,"David"};
StringNode nodesteven ={NULL,NULL,"steven"};
StringNode nodeabrahim ={&nodeAli,&nodeabu,"abrahim"};
StringNode nodenoah ={&nodeDavid,&nodesteven,"noah"};
StringNode nodeAdam ={&nodeabrahim,&nodenoah,"adam"};
void setUp(void)
{
}

void tearDown(void)
{
}
/*
void test_Traversal(void)
{
    inOderTreeTraversal(&node10);

}

void test_Traversalpre(void)
{
    preOderTreeTraversal(&node10);

}

void test_Traversalpost(void)
{
    postOderTreeTraversal(&node10);

}
*/
void test_Traversal_with_printInteger(void)
{
    _inOderTreeTraversal(&node10,printInteger);
}

void test_Traversal_with_printString(void)
{
    _inOderTreeTraversal((Node *)&nodeAdam,printString);
}
