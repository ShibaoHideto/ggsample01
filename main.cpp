#include "gg.h"
using namespace gg;

/*
** ���C���v���O����
*/
int main(int argc, char *argv[])
{
  // �Q�[���O���t�B�b�N�X���_�̓s���ɂ��ƂÂ�������
  if (!ggInit()) return 1;
  
  // �w�i�F
  glClearColor(1.0, 1.0, 1.0, 1.0);

  // �E�B���h�E���J���Ă���Ԃ���Ԃ��`�悷��
  while (glfwGetWindowParam(GLFW_OPENED))
  {
    // ��ʏ���
    glClear(GL_COLOR_BUFFER_BIT);
    
    // �_�u���o�b�t�@�����O
    glfwSwapBuffers();
  }

  return 0;
}
