#ifndef _URKineticAPIs

#define _URKineticAPIs

//��������㷨ר�ú���ָ��
typedef void (*Functions_t[])(void);
//dh����
#define pi 3.141592653
#define d1 94
#define d4 -109
#define d5 95.5
#define d6 85
#define a2 353
#define a3 310


double Tfkine[4][4] = { {},{},{},{0,0,0,1} };//�ؽ�6����ϵλ��
#define nx Tfkine[0][0]
#define ny Tfkine[1][0]
#define nz Tfkine[2][0]
#define ox Tfkine[0][1]
#define oy Tfkine[1][1]
#define oz Tfkine[2][1]
#define ax Tfkine[0][2]
#define ay Tfkine[1][2]
#define az Tfkine[2][2]
#define px Tfkine[0][3]
#define py Tfkine[1][3]
#define pz Tfkine[2][3]

double	ToolPose[4][4];//����ϵ��Ի�����λ��
#define Tnx ToolPose[0][0]
#define Tny ToolPose[1][0]
#define Tnz ToolPose[2][0]
#define Tox ToolPose[0][1]
#define Toy ToolPose[1][1]
#define Toz ToolPose[2][1]
#define Tax ToolPose[0][2]
#define Tay ToolPose[1][2]
#define Taz ToolPose[2][2]
#define Tpx ToolPose[0][3]
#define Tpy ToolPose[1][3]
#define Tpz ToolPose[2][3]


double theta_fast[6];//��ſ�������㷨�Ĺؽڽ�
#define t_1 theta_fast[0]
#define t_2 theta_fast[1]
#define t_3 theta_fast[2]
#define t_4 theta_fast[3]
#define t_5 theta_fast[4]
#define t_6 theta_fast[5]


double matrix[4][4];//��α任����
double RefKine[4][4] = { {},{},{},{0,0,0,1} };//�Զ�������ϵ�µ�λ��
double SelfDefCoor[4][4];//�Զ�������ϵ����α任��
double ResultM4[4][4];//����Ľ������


double k[6] = { 180,180,180,180,180,180 };
double kmin[6] = { -180, -180,-180,-180,-180,-180 };





//�����ؽڽ�ֵ�����������
double theta1[2];
double theta5[4];
double theta6[4];

double theta2[8];
double theta3[8];
double theta4[8];


double s1, s2, s3, s4, s5, s6, c1, c2, c3, c4, c5, c6, c234, s234, c23, s23;
double crt, cpt, cyt, srt, spt, syt, pxt, pyt, pzt;//s��c����sin��cos;r,p,y����rpy��,t������Tool������������ϵ�Ĳ���
double nxt, nyt, nzt, oxt, oyt, ozt, axt, ayt, azt;//nx,ny�Ȳο��������ϵ�еĺ���,t����Tool,����ͬ��
double snx, sny, snz, sox, soy, soz, sax, say, saz, spx, spy, spz;//���ڴ洢һЩ��ʱ��������������ϵ����


double parax, paray;//����������


void f1(), f2(), f3(), f4(), f5(), f6(), f7(), f8();//��������㷨��8�����ӳ��

Functions_t Functions = { f1,f2,f3,f4,f5,f6,f7,f8 };//8����⺯������

int FuncIndex = 0;//��������㷨����

#endif 





