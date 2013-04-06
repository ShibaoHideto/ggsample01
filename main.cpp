#include <iostream>

// �⏕�v���O����
#include "gg.h"
using namespace gg;

//
// �����ݒ�
//
static void init(void)
{
  // �w�i�F
  glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
}

//
// ���C���v���O����
//
int main(int argc, const char * argv[])
{
  // GLFW ������������
  if (glfwInit() == GL_FALSE)
  {
    // �������Ɏ��s����
    std::cerr << "Error: Failed to initialize GLFW." << std::endl;
    return 1;
  }
  
  // OpenGL Version 3.2 Core Profile ��I������
  glfwOpenWindowHint(GLFW_OPENGL_VERSION_MAJOR, 3);
  glfwOpenWindowHint(GLFW_OPENGL_VERSION_MINOR, 2);
  glfwOpenWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
  
  // �E�B���h�E���J��
  if (glfwOpenWindow(0, 0, 0, 0, 0, 0, 0, 0, GLFW_WINDOW) == GL_FALSE)
  {
    // �E�B���h�E���J���Ȃ�����
    std::cerr << "Error: Failed to open GLFW window." << std::endl;
    return 1;
  }
  
  // �J�����E�B���h�E�ɑ΂���ݒ�
  glfwSwapInterval(1);
  glfwSetWindowTitle("sample");
  
  // �⏕�v���O�����ɂ�鏉����
  ggInit();
  
  // �����ݒ�
  init();
  
  // �E�B���h�E���J���Ă���Ԃ���Ԃ��`�悷��
  while (glfwGetWindowParam(GLFW_OPENED))
  {
    // ��ʏ���
    glClear(GL_COLOR_BUFFER_BIT);

    //
    // ������ OpenGL �ɂ��`����s��
    //

    // �o�b�t�@�����ւ���
    glfwSwapBuffers();
  }
  
  return 0;
}
