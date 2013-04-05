#include "gg.h"
using namespace gg;

/*
** メインプログラム
*/
int main(int argc, char *argv[])
{
  // ゲームグラフィックス特論の都合にもとづく初期化
  if (!ggInit()) return 1;
  
  // 背景色
  glClearColor(1.0, 1.0, 1.0, 1.0);

  // ウィンドウが開いている間くり返し描画する
  while (glfwGetWindowParam(GLFW_OPENED))
  {
    // 画面消去
    glClear(GL_COLOR_BUFFER_BIT);
    
    // ダブルバッファリング
    glfwSwapBuffers();
  }

  return 0;
}
