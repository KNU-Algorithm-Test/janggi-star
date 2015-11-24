#ifndef H_NODE
#define H_NODE

#include <vector>

#include "defines.h"

class Node {
public:
  Node(int stage[kStageHeight][kStageWidth], int depth, int point, Turn turn, Action lastAction);
  ~Node();
  void MakeChildNodes(int maxDepth);  
  const Action CalculateMiniMaxAction(bool random);
  const Action GetLastAction() { return lastAction_; }

private: 
  Node();
  bool MovableUnitExists(int unitID );
  const int CalculateMiniMaxScore();

  int stage_[kStageHeight][kStageWidth];    
  int depth_;
  int point_; // minimax alg. ������ leaf node������ �� ���� ���� �ʿ䰡 ������, �ϴ� ��� node���� ������ ���ǵ��� ������.
  int turn_;
  Action lastAction_;
  vector<Node*> childNodes_;
};

#endif