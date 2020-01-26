// PlantillaGraficos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h> 
#include <stdlib.h> 
#define GLEW_STATIC 
 
#include"GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream> 

using namespace std;


void dibujarLineas(){
	glBegin(GL_LINE_STRIP);
	glColor3f(0.17f, 0.38f, 0.21f);

	glVertex3f(-0.5f, -0.6f, 0.0f);
	glVertex3f(-0.4f, -0.7f, 0.0f);
	glVertex3f(-0.3f, -0.6f, 0.0f);
	glEnd();
}
void extra() {
	glBegin(GL_LINE_STRIP);
	glColor3f(0.17f, 0.38f, 0.21f);

	glVertex3f(0.5f, -0.6f, 0.0f);
	glVertex3f(0.4f, -0.7f, 0.0f);
	glVertex3f(0.3f, -0.6f, 0.0f);
	glEnd();
}
void ventana() {
	glBegin(GL_LINES);
	//Ventana marco
	glColor3f(0.16f, 0.08f, 0.03f);

	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.3f, 0.0f, 0.0f);

	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, 0.2f,0.0f);

	glVertex3f(0.0f, 0.2f, 0.0f);
	glVertex3f(0.3f, 0.2f, 0.0f);
	
	glVertex3f(0.3f, 0.2f, 0.0f);
	glVertex3f(0.3f,0.0f,0.0f);
	//Ventana
	glVertex3f(0.15f,0.0f,0.0f);
	glVertex3f(0.15f, 0.2f, 0.0f);

	glVertex3f(0.0f, 0.1f, 0.0f);
	glVertex3f(0.3f, 0.1f, 0.0f);
	//Rayos del Sol
	glColor3f(0.88f, 0.78f, 0.13f);
	glVertex3f(-0.5f,0.8f,0.0f);
	glVertex3f(-0.4f, 0.85f, 0.0f);
	
	glVertex3f(-0.5f, 0.9f, 0.0f);
	glVertex3f(-0.55f, 0.85f, 0.0f);
	
	glVertex3f(-0.48f, 0.7f, 0.0f);
	glVertex3f(-0.4f, 0.7f, 0.0f);

	glVertex3f(-0.5f, 0.6f, 0.0f);
	glVertex3f(-0.4f, 0.55f, 0.0f);

	glVertex3f(-0.55f,0.55f,0.0f);
	glVertex3f(-0.48f,0.45f,0.0f);

	glVertex3f(-0.6f, 0.48f, 0.0f);
	glVertex3f(-0.55f, 0.4f, 0.0f);

	glVertex3f(-0.7f, 0.48f, 0.0f);
	glVertex3f(-0.7f, 0.37f, 0.0f);

	glVertex3f(-0.8f, 0.5f, 0.0f);
	glVertex3f(-0.85f, 0.42f, 0.0f);

	glVertex3f(-0.88f, 0.55f, 0.0f);
	glVertex3f(-0.95f, 0.45f, 0.0f);

	glVertex3f(-0.9f, 0.6f, 0.0f);
	glVertex3f(-0.95f, 0.58f, 0.0f);

	glVertex3f(-1.0f, 0.7f, 0.0f);
	glVertex3f(-0.92f, 0.7f, 0.0f);

	glVertex3f(-0.9f, 0.78f, 0.0f);
	glVertex3f(-0.98f, 0.82f, 0.0f);

	glVertex3f(-0.88f, 0.82f, 0.0f);
	glVertex3f(-0.94f, 0.88f, 0.0f);

	glVertex3f(-0.82f, 0.88f, 0.0f);
	glVertex3f(-0.9f, 0.94f, 0.0f);

	glVertex3f(-0.76f, 0.90f, 0.0f);
	glVertex3f(-0.82f, 0.96f, 0.0f);

	glVertex3f(-0.7f, 0.92f, 0.0f);
	glVertex3f(-0.7f, 0.98f, 0.0f);

	glVertex3f(-0.62f, 0.90f, 0.0f);
	glVertex3f(-0.58f, 0.98f, 0.0f);

	glEnd();
}
void dibujarTriangulos() {
	glBegin(GL_TRIANGLES);

	//3f--> 3 flotantes 
	//Se agrega la f para no crear conflictor y especificar double
	//Establecemos Color
	glColor3f(1.0f, 0.8f, 0.3f);
	glVertex3f(-0.4f, 0.4f, 0.0f);
	glVertex3f(0.4f, 0.4f, 0.0f);
	glVertex3f(0.4f, -0.4f, 0.0f);
	////
	glColor3f(1.0f, 0.8f, 0.3f);
	glVertex3f(0.4f, -0.4f, 0.0f);
	glVertex3f(-0.4f, 0.4f, 0.0f);
	glVertex3f(-0.4f, -0.4f, 0.0f);
	///
	glColor3f(0.46f, 0.13f, 0.06f);

	glVertex3f(0.0f,0.8f,0.0f);
	glVertex3f(-0.5f, 0.3f, 0.0f);
	glVertex3f(0.5f, 0.3f, 0.0f);
	////
	glColor3f(0.59f,0.51f,0.49f);

	glVertex3f(-0.2f,-0.1f,0.0f);
	glVertex3f(0.2f, -0.1f, 0.0f);
	glVertex3f(-0.2f, -0.4f, 0.0f);

	glVertex3f(0.2f,-0.4f,0.0f);
	glVertex3f(-0.2f, -0.4f, 0.0f);
	glVertex3f(0.2f, -0.1f, 0.0f);
	
	//// Ventana
	glColor3f(0.61f, 0.93f, 0.99f);

	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, 0.2f, 0.0f);
	glVertex3f(0.3f, 0.2f, 0.0f);

	glVertex3f(0.3f, 0.0f, 0.0f);
	glVertex3f(0.3f, 0.2f, 0.0f);
	glVertex3f(0.0f, 0.0f, 0.0f);


	////
	glColor3f(0.3f, 0.1f, 0.06f);
	glVertex3f(-0.8f, -0.5f, 0.0f);
	glVertex3f(-0.7f, -0.5f, 0.0f);
	glVertex3f(-0.8f, 0.2f, 0.0f);

	glVertex3f(-0.7f, -0.5f, 0.0f);
	glVertex3f(-0.8f, 0.2f, 0.0f);
	glVertex3f(-0.7f, 0.2f, 0.0f);
	//Especificamos que dejaremos de dibujar 
	glEnd();
}
void cesped() {
	//Cesped
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.0f, 0.8f, 0.3f);

	glVertex3f(1.0f, -0.4f, 0.0f);
	glVertex3f(-1.0f, -0.4f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);

	glVertex3f(1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, -0.4f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glEnd();
}
void circulos() {
	glBegin(GL_POLYGON);
	glColor3f(0.88f,0.78f,0.13f);
	for (double i = 0; i < 360.0; i += 5.0) {
		glVertex3f(
			(0.2 * cos(i * 3.14159 / 180.0)) - 0.7, (0.2 * sin(i * 3.14159 / 180.0)) + 0.7, 0.0f);
	}
	glEnd();
}
void Arbol() {
	glBegin(GL_POLYGON);
	glColor3f(0.01f, 0.25f, 0.04f);
	for (double i = 0; i < 360.0; i += 6.0) {
		glVertex3f(
			(0.2 * cos(i * 3.14159 / 180.0)) - 0.75, (0.15 * sin(i * 3.14159 / 180.0)) + 0.0, 0.0f);
	}
	glEnd();
}
void arbol2() {
	glBegin(GL_POLYGON);
	glColor3f(0.01f, 0.25f, 0.04f);
	for (double i = 0; i < 360.0; i += 8.0) {
		glVertex3f(
			(0.2 * cos(i * 3.14159 / 180.0)) - 0.65, (0.15 * sin(i * 3.14159 / 180.0)) + 0.1, 0.0f);
	}
	glEnd();
}
void arbol3(){
	glBegin(GL_POLYGON);
	glColor3f(0.01f, 0.25f, 0.04f);
	for (double i = 0; i < 360.0; i += 6.0) {
		glVertex3f(
			(0.2 * cos(i * 3.14159 / 180.0)) - 0.75, (0.15 * sin(i * 3.14159 / 180.0)) + 0.2, 0.0f);
	}
	glEnd();
}

void nuveUno() {
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	for (double i = 0; i < 360.0; i += 8.0) {
		glVertex3f(
			(0.08 * cos(i * 3.14159 / 180.0)) - 0.25, (0.065 * sin(i * 3.14159 / 180.0)) + 0.65, 0.0f);
	}
	glEnd();
}

void nuveUnoDos() {
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	for (double i = 0; i < 360.0; i += 7.0) {
		glVertex3f(
			(0.08 * cos(i * 3.14159 / 180.0)) - 0.35, (0.065 * sin(i * 3.14159 / 180.0)) + 0.6, 0.0f);
	}glEnd();

	}

void nuveDos() {
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	for (double i = 0; i < 360.0; i += 8.0) {
		glVertex3f(
			(0.15 * cos(i * 3.14159 / 180.0)) + 0.3, (0.1 * sin(i * 3.14159 / 180.0)) + 0.7, 0.0f);
	}
	glEnd();
}
void nuveDosDos() {
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	for (double i = 0; i < 360.0; i += 7.0) {
		glVertex3f(
			(0.1 * cos(i * 3.14159 / 180.0)) + 0.35, (0.08 * sin(i * 3.14159 / 180.0)) + 0.8, 0.0f);
	}glEnd();
}


void dibujar() {
	cesped();
	dibujarTriangulos();
	dibujarLineas();
	extra();
	ventana();
	circulos();
	Arbol(); arbol2(); arbol3();
	nuveUno(); nuveUnoDos();
	nuveDos(); nuveDosDos();
}
//$(ProjectDir)include 
int main()
{
	//Declarar una ventana 
	GLFWwindow* window;


	//Si no se pudo inicializar GLFW  //Terminamos Ejecución 
	if (!glfwInit()) {
		exit(EXIT_FAILURE);
	}
	window = glfwCreateWindow(600, 600, "Ventana Cookie", NULL, NULL);
	
	//Si no se pudo crear la ventana
	//Terminamos ejecución
	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	//Si se pudo inicializar GLFW
	//Inicializams la ventana


	//Establecemos la ventana como contexto
	glfwMakeContextCurrent(window);
	//UsarFuncionesdeOpengl
	//Una vez establecido el contexto. Se activan las funciones "modernas" (gpu)
	glewExperimental = true;
	
	GLenum errores = glewInit();
	if (errores != GLEW_OK) {
		glewGetErrorString(errores);
	}

	const GLubyte  *versionGL = glGetString(GL_VERSION);

	cout << "Version OpenGl: " << versionGL;

	//Clilo de dibujo (Draw loop)
	while (!glfwWindowShouldClose(window)) {

		//Establecer región de dibujo 
		glViewport(0, 0, 600, 600);
		//Establecemos el color de borrado
		glClearColor(0.2, 0.6, 1.0, 1);
		//Borrar
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		dibujar();
		//Se comunica con los dispositivos de entrada
		glfwPollEvents();
		// Actualizar los valores y dibujar 
		glfwSwapBuffers(window);
	}
	//Despues del ciclo de dibujo Eliminamos ventana y procesos de glfw
	glfwDestroyWindow(window);
	glfwTerminate();
}