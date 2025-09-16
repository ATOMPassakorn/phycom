#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// DataNode structure using typedef
typedef struct DataNode {
  char* data;
  struct DataNode* next;
} DataNode;
 
DataNode* createDataNode(char* data);
 
// Create a new DataNode
DataNode* createDataNode(char* data) {
  // Allocate memory for the node
  DataNode* newNode = (DataNode*)malloc(sizeof(DataNode)); // สร้าง DataNode
 
  // Allocate memory for the string and copy the data
  newNode->data = (char*)malloc(strlen(data) + 1); 
  // จองพื้นที่เพื่อเก็บ str โดย *data จะชี้ไปที่ str EX: "Atom" มี 4 + 1(Null terminator) = 5 ตัว
  strcpy(newNode->data, data);
 
  newNode->next = NULL;
  return newNode; //ส่งค่า Node ใหม่ที่สร้าง
}
 
int main() {
  char data[101]; 
  scanf("%[^\n]s", data);
 
  // Create a new DataNode
  DataNode* pNew = createDataNode(data);
 
  // Print the data and next pointer
  printf("%s\n", pNew->data);
  printf("%p\n", (void*)pNew->next);
 
  // Free allocated memory for data
  free(pNew->data);
  free(pNew);
  return 0;
}