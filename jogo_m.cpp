#include <windows.h>
#include <gl/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

GLint i, j;  


void DesenhaTextoStroke(void *font, char *string){
          //exibe caractere a caractere
          while(*string)
          glutStrokeCharacter(GLUT_STROKE_ROMAN, *string++);
          }
void DesenhaTexto(void *font, char *string){
     //exibe caractere a caractere
     while(*string)
     glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
     }
   
GLint matriz[40][40] ={{1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                   {2, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1},
                   {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1},
                   {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1},
                   {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, },
                   {1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1},
                   {1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1},
                   {1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1},
                   {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
                   {0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1},
                   {1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1},
                   {1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0},
                   {1, 1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1},
                   {1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1},
                   {1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1},
                   {1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1},
                   {1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1},
                   {1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1},
            /*20*/ {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1},
                   {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1},
                   {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1},
                   {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1},
                   {1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1},
                   {1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                   {1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                   {1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1},
                   {1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1},
                   {1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1},
                   {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0},
                   {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1},
                   {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 0, 0, 1, 1},
                   {1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 0, 1, 0, 0, 1, 0, 1, 0},
                   {1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 1},
                   {1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1},
                   {1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1},
                   {1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 0, 1},
                   {1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 0, 3, 1},
                   {1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1},
            /*20*/ {1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1},
                   
                   
                   
                   };
                   

GLint linha=1, col=0;

                          
void inicio(void){
     glClear(GL_COLOR_BUFFER_BIT);
     glPushMatrix();
     
    if(linha == 38 && col == -2)
    {
        glColor3f(1.0, 0.5, 0.0);
        glTranslatef(-6000, -1600, 0);
        glScalef(4,4,0);
        glLineWidth(15);
        DesenhaTextoStroke(GLUT_BITMAP_TIMES_ROMAN_24,"VOCE VENCEU PARABENS");
    }
    else 
    {
        glColor3f(0.5,1.0,0.5);
        glRasterPos2f(-20,30);
        DesenhaTexto(GLUT_BITMAP_TIMES_ROMAN_24,"BEM VINDO AO SUPER MAZEE");
        glRasterPos2f(-70,25);
        DesenhaTexto(GLUT_BITMAP_TIMES_ROMAN_24,"Introducao:");
        glRasterPos2f(-70,20);
        DesenhaTexto(GLUT_BITMAP_TIMES_ROMAN_24,"SUPER MAZEE, um jogo para exercitar a tomada de decisao e planejamento"); 
        glRasterPos2f(-70,15);
        DesenhaTexto(GLUT_BITMAP_TIMES_ROMAN_24,"Um jeito divertido de exercitar o raciocinio e a coordenacao motora dos jogadores!");
        glRasterPos2f(-57,0);
        DesenhaTexto(GLUT_BITMAP_TIMES_ROMAN_24,"Controles:");
        glRasterPos2f(-57,-4);
        DesenhaTexto(GLUT_BITMAP_TIMES_ROMAN_24,"Utilize as setas para movimentar");
        glRasterPos2f(-57,-8);
        DesenhaTexto(GLUT_BITMAP_TIMES_ROMAN_24,"- Pressione a tecla HOME para Novo Jogo");
        glRasterPos2f(-57,-12);
        DesenhaTexto(GLUT_BITMAP_TIMES_ROMAN_24,"- Pressione as teclas setas para movimentar"); 
        glRasterPos2f(-57,-20);
        DesenhaTexto(GLUT_BITMAP_TIMES_ROMAN_24,"OBJETIVO");
        glRasterPos2f(-57,-24);
        DesenhaTexto(GLUT_BITMAP_TIMES_ROMAN_24,"Encontre o caminho e ");
        glColor3f(0.0f, 1.0f, 1.0f);
        glRasterPos2f(-57,-28);
        DesenhaTexto(GLUT_BITMAP_TIMES_ROMAN_24,"BOA SOOOORTE :D");   
                
        glColor3f(1.0f, 0.0f, 0.5f);
        glRasterPos2f(20,-35);
        DesenhaTexto(GLUT_BITMAP_TIMES_ROMAN_24,"Produzido por WNogueira 2013/1");
    }
    glutSwapBuffers();
    glPopMatrix();      
}

void Desenha(void)
{
    glMatrixMode(GL_MODELVIEW);
    glClearColor(0.5f, 1.0f ,0.5, 0);
    glClear(GL_COLOR_BUFFER_BIT);

    glLoadIdentity();
    
    glColor3f(1.0f, 0.0f, 0.0f);
    glScalef(2,2,1);
    glTranslatef(-15, 19, 0);
    glRotatef(90.0, 0.0, 0.0, 1.0);
                  
    for(j=0; j<40; j++)
    {
        for(i=0; i<40; i++)
        {
            if(matriz[i][j] == 1)
                glColor3f(1.0f, 0.0f, 0.0f); //vermelho
            else if(matriz[i][j] == 2)
                glColor3f(0.0f, 0.0f, 1.0f);  // azul
            else if(matriz[i][j] == 0)
                glColor3f(1.0f, 1.0f, 1.0f); //branco
            else if(matriz[i][j] == 3)
                glColor3f(0.0f, 0.5f, 0.5f); 
            
            glBegin(GL_QUADS);
            glVertex2f(-i, -j);
            glVertex2f(-i, (-j+1));
            glVertex2f((-i+1), (-j+1));
            glVertex2f((-i+1),  -j);
            glEnd();
        }
    }
    glColor3f(0.0f, 0.0f, 0.0f);
    glTranslatef(-1, -33, 0);
    glScalef(0.01, 0.01, 0.01); //diminui o tamanho da fonte
    glRotatef(270, 0, 0, 1); //rotaciona o texto
    glLineWidth(5); // define a espessura da linha
    DesenhaTextoStroke(GLUT_STROKE_ROMAN,"NIVEL 1");
    glutSwapBuffers();
}
                                            

void AlteraTamanhoJanela(GLsizei w, GLsizei h)
{
    GLsizei largura, altura;
    // evita a divisao por zero
    if(h==0) h=1;
    // atualiza as variaveis

    largura = w;
    altura = h;

    // especifica as dimensoes da Viewport
    glViewport(0, 0, largura, altura);
    // inicializa o sistema de coordenadas
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    // estabelece a janela de selecao mantendo a propor��o com a janela de visualizacao 
    if (largura <= altura)
        gluOrtho2D(-40.0f, 40.0f, -40.0f*largura/altura, 40.0f*altura/largura);
    else 
        gluOrtho2D(-40.0f*largura/altura, 40.0f*largura/altura, -40.0f, 40.0f);
}

void TeclasEspeciais(int key, int x, int y)
{
    if(linha==38 && col== -1)
        glutDisplayFunc(inicio);
    switch (key)
    {
        case GLUT_KEY_UP:
            if(linha != 0 && matriz[linha-1][col] != 0)
            {
                matriz[linha][col] = 1;
                matriz[linha-1][col] = 2;
                linha--;
            }
            break;
                                
            case GLUT_KEY_DOWN: 
                if(linha != 40 && matriz[linha+1][col] != 0)
                {
                    matriz[linha][col] = 1;
                    matriz[linha+1][col] = 2;
                    linha++;
                }
                break;
                                
            case GLUT_KEY_LEFT: 
                if(matriz[linha][col-1] != 0)
                {
                    matriz[linha][col] = 1;
                    matriz[linha][col-1] = 2;
                    col--;
                }
                break; 

            case GLUT_KEY_RIGHT:  
                if(matriz[linha][col+1] != 0)
                {
                    matriz[linha][col] = 1;
                    matriz[linha][col+1] = 2;
                    col++;
                }
                break; 
            case GLUT_KEY_HOME:
                glutDisplayFunc(Desenha);
                break;
        }
    glutPostRedisplay();
}
                       
// fn callback chamada para gerenciar eventos de tecla
void Teclado (unsigned char key, int x, int y)
{
    if(key == 27)
        exit(0);
}
         
// fn callback responsavel por inicializar parametros e variaveis
void Inicializa (void)
{
     glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
     glMatrixMode(GL_PROJECTION);
      
    //glLoadIdentity();
    // glMatrixMode(GL_MODELVIEW);
}

int main(void){
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH|GLUT_RGB);
    glutInitWindowPosition(5,5);
    glutInitWindowSize(1350,700);
    glutCreateWindow("LABIRINTO");
    glutDisplayFunc(inicio);
    glutReshapeFunc(AlteraTamanhoJanela);
    glutSpecialFunc(TeclasEspeciais);
    glutKeyboardFunc(Teclado);
    Inicializa();
    glutMainLoop();
    return 0;
}
