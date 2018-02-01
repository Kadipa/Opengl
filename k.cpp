#include <stdbool.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <string.h>

char text[] = "hello"; //initialize value for character array
int count = 0; //for true word count
int i = 0; //for random number initialization
int su, kamh, num = 0;
float x, y; //for drawing image
bool flag = false; //for typing word case
bool loadImg = false; //to load image
int kira = 0; //to load image correctly
const int font=(int)GLUT_BITMAP_HELVETICA_18;

void init(void) {
	/*  select clearing (background) color       */
	glClearColor(0.0, 0.0, 0.0, 0.0);

	/*  initialize viewing values  */
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

}
void face(){

	glPointSize(2.0);
	for(su=0;su<=360;su++){
			 glBegin(GL_POINTS);
			 	 x=(cos((2*su*3.14)/360)) * .6;
			 	 y=(sin((2*su*3.14)/360)) * .6;
			 	 glColor3f(0,1,0);
			 	 glVertex2f(x, y);
			 glEnd();
	 }


}

void confounded(){
	float a=-0.25,b=-0.2,c=-0.17,d=-0.3,e=-0.1,f=-0.2;

	for(kamh=0;kamh<3;kamh++){
		glLineWidth(5.0);
		glBegin(GL_LINES);
			glVertex2f(a,b);
			glVertex2f(c,d);
		glEnd();

		glBegin(GL_LINES);
			glVertex2f(c,d);
			glVertex2f(e,f);
		glEnd();
		a=e;
		b=f;
		c=a+0.08;
		d=b+(-0.1);
		e=c+0.07;
		f=d+0.1;

	}

}
void confused(){
	float x;
		glPointSize(2);
		glColor3f(0, 1, 0);  // Color Red
		glBegin(GL_POINTS);
		for (x = -1; x <= 0.139; x += 0.001)
		{
		     float delta = cbrt(x*x) * cbrt(x*x) - 100*x*x +5;
		     float y1 = (cbrt(x*x) + sqrt(delta)) /20;
		     glVertex2f(x, y1-0.25);
		}
		glEnd();
}
void dizzy() {
	float j;
	//glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glBegin(GL_POLYGON);
	for (j = 6.28; j > 0; j -= (3.14 / 30)) //<-- Change this Value
		glVertex2f(((cos(j) * 0.12)), ((sin(j) * 0.12) - 0.25));
	//glPointSize(3.0);
	glEnd();
}
void eat(){
	for(su=0;su<360;su++){
			 	glBegin(GL_POINTS);
		 	 	 x = cos((2*su*3.14)/360) * .3;
		 	 	 y = sin(2*su*3.14) * .3;
		 	 	 glVertex2f(x,y);
		 	 	glEnd();
		 }
}
void flush(){
	float j;

	glLineWidth(2);
	glBegin(GL_LINE_LOOP);
	for (j = 6.28; j > 0; j -= (3.14 / 30)) //<-- Change this Value
		glVertex2f(((cos(j) * 0.12))-0.25, ((sin(j) * 0.12)+0.05 ));
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINE_LOOP);
	for (j = 6.28; j > 0; j -= (3.14 / 30)) //<-- Change this Value
			glVertex2f(((cos(j) * 0.12))+0.25, ((sin(j) * 0.12)+0.05));
	glEnd();

	glBegin(GL_POLYGON);
	for (j = 6.28; j > 0; j -= (3.14 / 30)) //<-- Change this Value
		glVertex2f(((cos(j) * 0.03))-0.24, ((sin(j) * 0.03) + 0.05));
	glEnd();

	glBegin(GL_POLYGON);
	for (j = 6.28; j > 0; j -= (3.14 / 30)) //<-- Change this Value
		glVertex2f(((cos(j) * 0.03))+0.24, ((sin(j) * 0.03) + 0.05));
	glEnd();


}
void funny(){

	for(su=230;su<310;su++){
		 	glBegin(GL_POINTS);
		 	 	 x = cos((2*su*3.14)/360) * .3;
		 	 	 y = sin((2*su*3.14)/360) * .3;
		 	 	 glVertex2f(x,y);
	 	 	glEnd();
	}

	glBegin(GL_QUADS);
			glVertex2f(-0.05, -0.3);
		    glVertex2f( 0.05, -0.3);
		    glVertex2f( 0.05, -0.4);
		    glVertex2f(-0.05, -0.4);
	glEnd();
}
void grimacing(){

	float a,b,c;
	glBegin(GL_QUADS);
		glVertex2f(-0.29, -0.15);
	    glVertex2f( 0.29, -0.15);
	    glVertex2f( 0.29, -0.3);
	    glVertex2f(-0.29, -0.3);
	glEnd();

	glLineWidth(2.0);
	glBegin(GL_LINES);
		glColor3f(1,0,0);
		glVertex2f(-0.29,-0.23);
		glVertex2f(0.29,-0.23);
	glEnd();

	a=-0.25, b=-0.15, c=-0.3;
	for(kamh=0;kamh<=10;kamh++){
		glBegin(GL_LINES);

					glVertex2f(a,b);
					glVertex2f(a,c);
		glEnd();
		a+=0.05;

	}

}
void hushed(){
	float j;
		glLineWidth(2);
		glBegin(GL_LINE_LOOP);
		for (j = 6.28; j > 0; j -= (3.14 / 30)) //<-- Change this Value
			glVertex2f(((cos(j) * 0.07)), ((sin(j) * 0.07) - 0.25));
		glEnd();

}
void kiss(){
	glLineWidth(2.0);
	glBegin(GL_LINE_STRIP);
		glVertex2f(0,-0.15);
		glVertex2f(0.05,-0.2);
		glVertex2f(0,-0.25);
		glVertex2f(0.05,-0.3);
		glVertex2f(0,-0.35);
	glEnd();
}
void love(){
    float x;
    glColor3f(0, 1, 0);  // Color green
    glBegin(GL_LINE_LOOP);
        for (x = -1.139; x <= 1.139; x += 0.001)
        {
            float delta = cbrt(x*x) * cbrt(x*x) - 25*x*x +0.15;
            float y1 = (cbrt(x*x) + sqrt(delta)) /4;
            float y2 = (cbrt(x*x) - sqrt(delta)) /4;
            glVertex2f(x-0.25, y1+0.1);
            glVertex2f(x-0.25, y2+0.1);
        }
    glEnd();

    glBegin(GL_LINE_LOOP);
        for (x = -1.139; x <= 1.139; x += 0.001)
        {
            float delta = cbrt(x*x) * cbrt(x*x) - 25*x*x +0.15;
            float y1 = (cbrt(x*x) + sqrt(delta)) /4;
            float y2 = (cbrt(x*x) - sqrt(delta)) /4;
            glVertex2f(x+0.25, y1+0.1);
            glVertex2f(x+0.25, y2+0.1);
        }
    glEnd();

}
void laugh(){

	glLineWidth(2.0);
	glBegin(GL_LINES);
			glVertex2f(-.33,-.2);
			glVertex2f(.33,-.2);

	glEnd();

	for(i=210;i<330;i++){
		 	glBegin(GL_POINTS);
	 	 	 x = cos((2*i*3.14)/360) * .4;
	 	 	 y = sin((2*i*3.14)/360) * .4;
	 	 	 glVertex2f(x,y);
	 	 	glEnd();
	 }
}
void meh(){
	glBegin(GL_LINES);
		glVertex2f(-.18,-.3);
		glVertex2f(.2,-.2);
	glEnd();
}
void neutral(){
	glBegin(GL_LINES);
		glVertex2f(-.2,-.3);
		glVertex2f(.2,-.3);
	glEnd();
}
void peace(){
	float j;
		glLineWidth(2.0);
		glBegin(GL_LINE_LOOP);
		for (j = 6.28; j > 0; j -= (3.14 / 30)) //<-- Change this Value
			glVertex2f(((cos(j) * 0.7)), ((sin(j) * 0.12) + 0.55));
		glEnd();

		for(su=200;su<340;su++){
		glBegin(GL_POINTS);
			x = cos((su*3.14)/180) * .3;
			y = sin((su*3.14)/180) * .3;
		glVertex2f(x,y);
		glEnd();
		 }
}
void smile(){

	for(su=200;su<340;su++){
		 	glBegin(GL_POINTS);
	 	 	 x = cos((su*3.14)/180) * .3;
	 	 	 y = sin((su*3.14)/180) * .3;
	 	 	 glVertex2f(x,y);
	 	 glEnd();
	 }

}
void sad(){
	float x;
	glPointSize(2);
	glColor3f(0, 1, 0);  // Color Red
	glBegin(GL_POINTS);
	for (x = -1.139; x <= 1.139; x += 0.001)
	{
	     float delta = cbrt(x*x) * cbrt(x*x) - 100*x*x +4;
	     float y1 = (cbrt(x*x) + sqrt(delta)) /20;
	     glVertex2f(x, y1-0.25);
	}
	glEnd();
}
void sick(){
	glBegin(GL_QUADS);
		glVertex2f(-0.29, 0.01);
		glVertex2f( 0.29, 0.01);
		glVertex2f( 0.29, -0.3);
		glVertex2f(-0.29, -0.3);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
		glVertex2f(0.29,-0.07);
		glVertex2f(0.6,0.07);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(-0.29,-0.07);
		glVertex2f(-0.6,0.07);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(0.29,-0.25);
		glVertex2f(0.57,-0.2);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(-0.29,-0.25);
		glVertex2f(-0.57,-0.2);
	glEnd();
}
void suprise(){
	float j;
	glBegin(GL_LINE_LOOP);
	for (j = 6.28; j > 0; j -= (3.14 / 30)) //<-- Change this Value
		glVertex2f(((cos(j) * 0.1)), ((sin(j) * 0.12) - 0.25));
	glEnd();


}
void silent(){
	glLineWidth(2);
	glBegin(GL_LINES);
			glVertex2f(-.15,-.3);
			glVertex2f(.15,-.3);
	glEnd();

}
void talk(){
	for(su=210;su<330;su++){
			 	glBegin(GL_POINTS);
		 	 	 x = cos((2*su*3.14)/120) * .3;
		 	 	 y = sin((2*su*3.14)/360) * .3;
		 	 	 glVertex2f(x,y);
		 	 	glEnd();
		 }
}
void wink(){

	glBegin(GL_POINTS);
	for (x = -1.139; x <= 1.139; x += 0.001)
	{
	     float delta = cbrt(x*x) * cbrt(x*x) - 100*x*x +1;
	     float y1 = (cbrt(x*x) - sqrt(delta)) /18;
	     glVertex2f(x, y1-0.25);
	}
	glEnd();

}


void eye1(){
	float j;
	glBegin(GL_POLYGON);
	for (j = 6.28; j > 0; j -= (3.14 / 30)) //<-- Change this Value
		glVertex2f(((cos(j) * 0.05))-0.25, ((sin(j) * 0.05) + 0.1));
	glEnd();

	glBegin(GL_POLYGON);
	for (j = 6.28; j > 0; j -= (3.14 / 30)) //<-- Change this Value
		glVertex2f(((cos(j) * 0.05))+0.25, ((sin(j) * 0.05) + 0.1));
	glEnd();

}
void eye2(){
	float j;
			glBegin(GL_POLYGON);
			for (j = 6.28; j > 0; j -= (3.14 / 30)) //<-- Change this Value
				glVertex2f(((cos(j) * 0.05))-0.25, ((sin(j) * 0.05) + 0.1));
			glEnd();

		glLineWidth(2);
		glBegin(GL_LINES);
			glVertex2f(.15,.1);
			glVertex2f(.3,.1);
		glEnd();

}
void eye3(){
	glLineWidth(2.0);
	glBegin(GL_LINES);
		glVertex2f(-.2,.15);
		glVertex2f(-.35,.25);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(.2,.15);
		glVertex2f(.35,.25);
	glEnd();

}

void eye4(){
	glLineWidth(3.0);
	glBegin(GL_LINES);
		glVertex2f(-.2,.15);
		glVertex2f(-.35,.25);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(-.35,.15);
		glVertex2f(-.2,.25);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(.2,.15);
		glVertex2f(.35,.25);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(.35,.15);
		glVertex2f(.2,.25);
	glEnd();


}

void eye5(){
	glPointSize(10.0);
	glBegin(GL_POINTS);
		 	 glVertex2f(-.25,.2);
		 	 glVertex2f(.25,.2);
	 glEnd();

	glBegin(GL_LINES);
		glVertex2f(-.35,.3);
		glVertex2f(.35,.3);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(-.35,.3);
		glVertex2f(-.35,.1);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(-.15,.3);
		glVertex2f(-.15,.1);
	glEnd();

	glBegin(GL_LINES);
			glVertex2f(-.35,.1);
			glVertex2f(-.15,.1);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(.15,.3);
		glVertex2f(.15,.1);
	glEnd();

	glBegin(GL_LINES);
			glVertex2f(.35,.3);
			glVertex2f(.35,.1);
	glEnd();

	glBegin(GL_LINES);
			glVertex2f(.35,.1);
			glVertex2f(.15,.1);
	glEnd();

}
void eye6(){
	glLineWidth(2);
	glBegin(GL_LINES);
		glVertex2f(-.2,.2);
		glVertex2f(-.35,.2);
	glEnd();
	glLineWidth(2);
	glBegin(GL_LINES);
		glVertex2f(.2,.2);
		glVertex2f(.35,.2);
	glEnd();
}

void eye7(){
	glLineWidth(2.0);
	glBegin(GL_LINES);
		glVertex2f(-.2,.25);
		glVertex2f(-.35,.15);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(.2,.25);
		glVertex2f(.35,.15);
	glEnd();

}
void eye8(){
	glLineWidth(5.0);

	glBegin(GL_LINES);
		glVertex2f(-.35,.25);
		glVertex2f(-.2,.15);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(.35,.25);
		glVertex2f(.2,.15);
	glEnd();


	glBegin(GL_LINES);
		glVertex2f(-.2,.15);
		glVertex2f(-.3,.05);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(.2,.15);
		glVertex2f(.3,.05);
	glEnd();

}
void eye9(){
	glLineWidth(2.0);
	glBegin(GL_LINES);
		glVertex2f(-.15,.4);
		glVertex2f(-.4,.35);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(.15,.4);
		glVertex2f(.4,.35);
	glEnd();

}
void eye10(){
	float x;
		glPointSize(2);
		glColor3f(0, 1, 0);  // Color Red
		glBegin(GL_POINTS);
		for (x = -1.139; x <= 1.139; x += 0.001)
		{
		     float delta = cbrt(x*x) * cbrt(x*x) - 200*x*x +1;
		     float y1 = (cbrt(x*x) + sqrt(delta)) /7;
		     glVertex2f(x-0.25, y1+0.1);
		}
		glEnd();


		glBegin(GL_POINTS);
		for (x = -1.139; x <= 1.139; x += 0.001)
		{
		     float delta = cbrt(x*x) * cbrt(x*x) - 200*x*x +1;
		     float y1 = (cbrt(x*x) + sqrt(delta)) /7;
		     glVertex2f(x+0.25, y1+0.1);
		}
		glEnd();
}
void eye11(){
	float x;
	    glPointSize(2);
	    glColor3f(0, 1, 0);  // Color Red
	    glBegin(GL_POINTS);
	        for (x = -1.139; x <= 1.139; x += 0.001)
	        {
	            float delta = cbrt(x*x) * cbrt(x*x) - 100*x*x +1;
	            float y1 = (cbrt(x*x) - sqrt(delta)) /20;
	            glVertex2f(x-0.25, y1+0.1);
	        }
	    glEnd();

	    glBegin(GL_POINTS);
	    for (x = -1.139; x <= 1.139; x += 0.001)
	    {
	           float delta = cbrt(x*x) * cbrt(x*x) - 100*x*x +1;
	           float y1 = (cbrt(x*x) - sqrt(delta)) /20;
	           glVertex2f(x+0.25, y1+0.1);
	    }
	    glEnd();
}

void display(void) {

	glClear(GL_COLOR_BUFFER_BIT);
	num++;
	kira = num; //to load image by random number

	switch (num) {
			case 0:
				strcpy(text, "amazed");
						for (i = 0; text[i] != '\0'; i++) {
							glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
						}
				break;

			case 1:
				strcpy(text, "angry");
				for (i = 0; text[i] != '\0'; i++) {
					glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
				}
				break;

			case 2:
				strcpy(text, "astonishe");
				for (i = 0; text[i] != '\0'; i++) {
					glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
				}
				break;

			case 3:
				strcpy(text, "confounded");
				for (i = 0; text[i] != '\0'; i++) {
					glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
				}
				break;

			case 4:
				strcpy(text, "confused");
				for (i = 0; text[i] != '\0'; i++) {
					glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
				}
				break;

			case 5:
				strcpy(text, "dizzy");
				for (i = 0; text[i] != '\0'; i++) {
					glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
				}
				break;

			case 6:
				strcpy(text, "eat");
				for (i = 0; text[i] != '\0'; i++) {
					glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
				}
				break;
			case 7:
					strcpy(text, "expressionless");
							for (i = 0; text[i] != '\0'; i++) {
								glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
							}
					break;

			case 8:
					strcpy(text, "flushed");
					for (i = 0; text[i] != '\0'; i++) {
						glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
					}
					break;

			case 9:
					strcpy(text, "funny");
					for (i = 0; text[i] != '\0'; i++) {
						glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
					}
					break;

			case 10:
					strcpy(text, "grimacing");
					for (i = 0; text[i] != '\0'; i++) {
						glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
					}
					break;

				case 11:
					strcpy(text, "grinning");
					for (i = 0; text[i] != '\0'; i++) {
						glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
					}
					break;

				case 12:
					strcpy(text, "hushed");
					for (i = 0; text[i] != '\0'; i++) {
						glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
					}
					break;

				case 13:
					strcpy(text, "kiss");
					for (i = 0; text[i] != '\0'; i++) {
						glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
					}
					break;
				case 14:
						strcpy(text, "laugh");
								for (i = 0; text[i] != '\0'; i++) {
									glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
								}
						break;

					case 15:
						strcpy(text, "love");
						for (i = 0; text[i] != '\0'; i++) {
							glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
						}
						break;

					case 16:
						strcpy(text, "meh");
						for (i = 0; text[i] != '\0'; i++) {
							glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
						}
						break;

					case 17:
						strcpy(text, "neutral");
						for (i = 0; text[i] != '\0'; i++) {
							glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
						}
						break;

					case 18:
						strcpy(text, "persevering");
						for (i = 0; text[i] != '\0'; i++) {
							glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
						}
						break;

					case 19:
						strcpy(text, "peace");
						for (i = 0; text[i] != '\0'; i++) {
							glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
						}
						break;

					case 20:
						strcpy(text, "pensive");
						for (i = 0; text[i] != '\0'; i++) {
							glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
						}
						break;
					case 21:
							strcpy(text, "relieved");
									for (i = 0; text[i] != '\0'; i++) {
										glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
									}
							break;

						case 22:
							strcpy(text, "sad");
							for (i = 0; text[i] != '\0'; i++) {
								glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
							}
							break;

						case 23:
							strcpy(text, "sick");
							for (i = 0; text[i] != '\0'; i++) {
								glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
							}
							break;

						case 24:
							strcpy(text, "sleeping");
							for (i = 0; text[i] != '\0'; i++) {
								glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
							}
							break;

						case 25:
							strcpy(text, "smile");
							for (i = 0; text[i] != '\0'; i++) {
								glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
							}
							break;

						case 26:
							strcpy(text, "silent");
							for (i = 0; text[i] != '\0'; i++) {
								glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
							}
							break;

						case 27:
							strcpy(text, "talk");
							for (i = 0; text[i] != '\0'; i++) {
								glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
							}
							break;
						case 28:
								strcpy(text, "winking");
										for (i = 0; text[i] != '\0'; i++) {
											glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
										}
								break;

							default:
								strcpy(text, "worried");
								for (i = 0; text[i] != '\0'; i++) {
									glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
								}
								break;

			}
		glFlush();
}
void display1(void) {
	switch (kira) {
		case 0://1amazed
			face();
			suprise();
			eye1();
			break;

		case 1:	//2angry
			face();
			sad();
			eye3();
			eye1();
			break;


		case 2:	//3astonishe
			face();
			suprise();
			eye9();
			eye4();
			break;

		case 3:	//4confounded
			face();
			confounded();
			eye8();
			break;

		case 4:	//5confused
			face();
			confused();
			eye1();
			break;

		case 5:	//6dizzy
			face();
			dizzy();
			eye9();
			eye4();
			break;

		case 6:	//7eat
			face();
			eat();
			eye1();
			break;

		case 7:	//8expressionless
			face();
			neutral();
			eye6();
			break;

		case 8:	//9flushed
			face();
			flush();
			silent();
			eye9();
			break;

		case 9://10funny
			face();
			funny();
			eye1();
			break;

		case 10://11grimacing
			face();
			grimacing();
			eye1();
			break;

		case 11://12grinning
			face();
			grimacing();
			eye10();
			break;

		case 12:	//13hushed
			face();
			hushed();
			eye1();
			eye9();
			break;

		case 13://14kiss
			face();
			kiss();
			eye2();
			break;

		case 14://15laugh
			face();
			laugh();
			eye1();
			break;

		case 15://16love
			face();
			love();
			laugh();
			break;

		case 16://17meh
			face();
			meh();
			eye1();
			break;

		case 17://18neutral
			face();
			neutral();
			eye1();
			break;

		case 18://19persevering
			face();
			sad();
			eye8();
			eye9();
			break;

		case 19://20peace
			face();
			peace();
			eye10();
			break;

		case 20://21pensive
			face();
			silent();
			eye11();
			eye9();
			break;

		case 21://22relieved
			face();
			eye11();
			smile();
			break;

		case 22://23sad
			face();
			sad();
			eye7();
			break;

		case 23://24sick
			face();
			sick();
			eye7();
			break;

		case 24://25sleeping
			face();
			hushed();
			eye11();
			break;

		case 25://26smile
			face();
			smile();
			eye1();
			break;

		case 26://27silent
			face();
			eye1();
			break;

		case 27://28talk
			face();
			talk();
			eye1();
			break;

		case 28://29winking
				face();
				wink();
				eye2();
				eye9();
				break;

		default://30worried
			face();
			sad();
			eye1();
			eye9();
			break;

		}
	glFlush();
}

void keyboard(unsigned char key, int x, int y) {
	flag = false;
	if (key == 13) {
		display();
	}

	switch (key) {
	case '1': 		//exit key
		exit(0);

	default:
		glColor3f(1, 1, 0);
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, key); //for bitmap one character
		glFlush();
		if (key == text[count]) {
			printf("ha ");			//text key for character array
			flag = true;
			count++; //for typing error case

		}
		if (flag == false) {
			count--; //for typing error case

		}

	}
	if (count == (int) strlen(text)) { //for true case
		printf("success");
		display1();
	}
}
//void draw(void){}
void reshape(int w, int h) {
	glViewport(0, 0, (GLsizei) w, (GLsizei) h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble) w, 0.0, (GLdouble) h);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(900, 650);
	glutInitWindowPosition(100, 0);
	glutCreateWindow("Show Your Emotion");
	init();
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	//glutReshapeFunc(reshape);
	glutMainLoop();
	return 0; /* ISO C requires main to return int. */
}
