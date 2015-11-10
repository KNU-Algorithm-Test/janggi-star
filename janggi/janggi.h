#ifndef H_JANGGI
#define H_JANGGI

#include <iostream>
using namespace std;

enum UnitID {
  HG, HC, HM, HS, HP, Hs, HJ,
  CG, CC, CM, CS, CP, Cs, CJ,
  IDSize,
};

enum StageID {
  MSSMSMSM,
};

const int     kStageWidth = 9;
const int     kStageHeight = 10;

class Janggi{
public:
  Janggi();

public:
  void          SetStage(StageID stage_id = MSSMSMSM);
  bool          CheckValidPos(int x, int y);
  const char*   GetUnitID(int x, int y);
  void          Show();  
  bool          Action(int cx, int cy, int nx, int ny);

private:
  
  int           stage_[kStageHeight][kStageWidth];    
};

#endif