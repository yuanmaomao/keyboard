
// keyboardDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "keyboard.h"
#include "keyboardDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	
// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CkeyboardDlg 对话框



CkeyboardDlg::CkeyboardDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CkeyboardDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CkeyboardDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CkeyboardDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CkeyboardDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CkeyboardDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CkeyboardDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CkeyboardDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CkeyboardDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CkeyboardDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON25, &CkeyboardDlg::OnBnClickedButton25)
	ON_BN_CLICKED(IDC_BUTTON7, &CkeyboardDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CkeyboardDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CkeyboardDlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CkeyboardDlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &CkeyboardDlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &CkeyboardDlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON26, &CkeyboardDlg::OnBnClickedButton26)
	ON_BN_CLICKED(IDC_BUTTON13, &CkeyboardDlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &CkeyboardDlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON15, &CkeyboardDlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON16, &CkeyboardDlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON17, &CkeyboardDlg::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON18, &CkeyboardDlg::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON27, &CkeyboardDlg::OnBnClickedButton27)
	ON_BN_CLICKED(IDC_BUTTON19, &CkeyboardDlg::OnBnClickedButton19)
	ON_BN_CLICKED(IDC_BUTTON20, &CkeyboardDlg::OnBnClickedButton20)
	ON_BN_CLICKED(IDC_BUTTON21, &CkeyboardDlg::OnBnClickedButton21)
	ON_BN_CLICKED(IDC_BUTTON22, &CkeyboardDlg::OnBnClickedButton22)
	ON_BN_CLICKED(IDC_BUTTON23, &CkeyboardDlg::OnBnClickedButton23)
	ON_BN_CLICKED(IDC_BUTTON24, &CkeyboardDlg::OnBnClickedButton24)
	ON_BN_CLICKED(IDC_BUTTON29, &CkeyboardDlg::OnBnClickedButton29)
	ON_BN_CLICKED(IDC_BUTTON31, &CkeyboardDlg::OnBnClickedButton31)
	
END_MESSAGE_MAP()


// CkeyboardDlg 消息处理程序

BOOL CkeyboardDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	ShowWindow(SW_MAXIMIZE);

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CkeyboardDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CkeyboardDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CkeyboardDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CkeyboardDlg::OnBnClickedButton1()
{   if (nkey.state)
   {
nkey.set(1,0);
	show(nkey,1,0);
	inputqueue(1,0);
}else
{
	MessageBox("此时不能操作，按“开始”");
}
	
}


void CkeyboardDlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	if(nkey.state){
	nkey.set(2,0);
	show(nkey,2,0);
	inputqueue(2,0);
	}else{
	MessageBox("此时不能操作，按“开始”");
	}
}


void CkeyboardDlg::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	if (nkey.state)
	{
nkey.set(3,0);
	show(nkey,3,0);
	inputqueue(3,0);
	}else{
	MessageBox("此时不能操作，按“开始”");
	}
	
}


void CkeyboardDlg::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	if (nkey.state)
	{
	nkey.set(4,0);
	show(nkey,4,0);
	inputqueue(4,0);
	}else{	
	MessageBox("此时不能操作，按“开始”");
	}
}


void CkeyboardDlg::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	if (nkey.state)
	{
	nkey.set(5,0);
	show(nkey,5,0);
	inputqueue(5,0);
	}else{
	MessageBox("此时不能操作，按“开始”");
	}

}


void CkeyboardDlg::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	if (nkey.state)
	{
	nkey.set(6,0);
	show(nkey,6,0);
	inputqueue(6,0);
	}else{
	MessageBox("此时不能操作，按“开始”");
	}

}


void CkeyboardDlg::OnBnClickedButton25()
{
	// TODO: 在此添加控件通知处理程序代码
	if (nkey.state)
	{
	nkey.set(0,1);
	show(nkey,0,1);
	inputqueue(0,1);
	}
	else{
	MessageBox("此时不能操作，按“开始”");
	}

}


void CkeyboardDlg::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	if (nkey.state)
	{
	nkey.set(1,1);
	show(nkey,1,1);
	inputqueue(1,1);
	}else
	{
		MessageBox("此时不能操作，按“开始”");
	}

}


void CkeyboardDlg::OnBnClickedButton8()
{
	// TODO: 在此添加控件通知处理程序代码
	if (nkey.state)
	{
	nkey.set(2,1);
	show(nkey,2,1);
	inputqueue(2,1);
	}else
	{
		MessageBox("此时不能操作，按“开始”");
	}

}


void CkeyboardDlg::OnBnClickedButton9()
{
	// TODO: 在此添加控件通知处理程序代码
	if (nkey.state)
	{
	nkey.set(3,1);
	show(nkey,3,1);
	inputqueue(3,1);
	}
	else
	{
		MessageBox("此时不能操作，按“开始”");
	}
}


void CkeyboardDlg::OnBnClickedButton10()
{
	// TODO: 在此添加控件通知处理程序代码
	if (nkey.state)
	{
	nkey.set(4,1);
	show(nkey,4,1);
	inputqueue(4,1);
	}
	else
	{
		MessageBox("此时不能操作，按“开始”");
	}
}


void CkeyboardDlg::OnBnClickedButton11()
{
	// TODO: 在此添加控件通知处理程序代码
	if (nkey.state)
	{
	nkey.set(5,1);
	show(nkey,5,1);
	inputqueue(5,1);
	}else
	{
		MessageBox("此时不能操作，按“开始”");
	}

}


void CkeyboardDlg::OnBnClickedButton12()
{
	// TODO: 在此添加控件通知处理程序代码
	if (nkey.state)
	{
	nkey.set(6,1);
	show(nkey,6,1);
	inputqueue(6,1);
	}
	else
	{
		MessageBox("此时不能操作，按“开始”");
	}
}


void CkeyboardDlg::OnBnClickedButton26()
{
	// TODO: 在此添加控件通知处理程序代码
	if (nkey.state)
	{
	nkey.set(0,2);
	show(nkey,0,2);
	inputqueue(0,2);
	}
	else
	{
		MessageBox("此时不能操作，按“开始”");
	}
}


void CkeyboardDlg::OnBnClickedButton13()
{
		// TODO: 在此添加控件通知处理程序代码
	if (nkey.state)
	{
	nkey.set(1,2);
	show(nkey,1,2);
	inputqueue(1,2);
	}
	else
	{
		MessageBox("此时不能操作，按“开始”");
	}
}


void CkeyboardDlg::OnBnClickedButton14()
{
		// TODO: 在此添加控件通知处理程序代码
	if (nkey.state)
	{
	nkey.set(2,2);
	show(nkey,2,2);
	inputqueue(2,2);
	}
	else
	{
		MessageBox("此时不能操作，按“开始”");
	}
}


void CkeyboardDlg::OnBnClickedButton15()
{
		// TODO: 在此添加控件通知处理程序代码
	if (nkey.state)
	{
	nkey.set(3,2);
	show(nkey,3,2);
	inputqueue(3,2);
	}
	else
	{
		MessageBox("此时不能操作，按“开始”");
	}
}


void CkeyboardDlg::OnBnClickedButton16()
{
		// TODO: 在此添加控件通知处理程序代码
	if (nkey.state)
	{
	nkey.set(4,2);
	show(nkey,4,2);
	inputqueue(4,2);
	}
	else
	{
		MessageBox("此时不能操作，按“开始”");
	}
}


void CkeyboardDlg::OnBnClickedButton17()
{
		// TODO: 在此添加控件通知处理程序代码
	if (nkey.state)
	{
	nkey.set(5,2);
	show(nkey,5,2);
	inputqueue(5,2);
	}
	else
	{
		MessageBox("此时不能操作，按“开始”");
	}

}


void CkeyboardDlg::OnBnClickedButton18()
{
		// TODO: 在此添加控件通知处理程序代码
	if (nkey.state)
	{
	nkey.set(6,2);
	show(nkey,6,2);
	inputqueue(6,2);
	}
	else
	{
		MessageBox("此时不能操作，按“开始”");
	}
}


void CkeyboardDlg::OnBnClickedButton27()
{
		// TODO: 在此添加控件通知处理程序代码
	if (nkey.state)
	{
	nkey.set(0,3);
	show(nkey,0,3);
	inputqueue(0,3);
	}
	else
	{
		MessageBox("此时不能操作，按“开始”");
	}
}


void CkeyboardDlg::OnBnClickedButton19()
{
		// TODO: 在此添加控件通知处理程序代码
	if (nkey.state)
	{
	nkey.set(1,3);
	show(nkey,1,3);
	inputqueue(1,3);
	}
	else
	{
		MessageBox("此时不能操作，按“开始”");
	}
}


void CkeyboardDlg::OnBnClickedButton20()
{
		// TODO: 在此添加控件通知处理程序代码
	if (nkey.state)
	{
	nkey.set(2,3);
	show(nkey,2,3);
	inputqueue(2,3);
	}
	else
	{
		MessageBox("此时不能操作，按“开始”");
	}

}


void CkeyboardDlg::OnBnClickedButton21()
{
		// TODO: 在此添加控件通知处理程序代码
	if (nkey.state)
	{
	nkey.set(3,3);
	show(nkey,3,3);
	inputqueue(3,3);
	}
	else
	{
		MessageBox("此时不能操作，按“开始”");
	}
}


void CkeyboardDlg::OnBnClickedButton22()
{
		// TODO: 在此添加控件通知处理程序代码
	if (nkey.state)
	{
	nkey.set(4,3);
	show(nkey,4,3);
	inputqueue(4,3);
	}
	else
	{
		MessageBox("此时不能操作，按“开始”");
	}
}


void CkeyboardDlg::OnBnClickedButton23()
{
		// TODO: 在此添加控件通知处理程序代码
	if (nkey.state)
	{
	nkey.set(5,3);
	show(nkey,5,3);
	inputqueue(5,3);
	}
	else
	{
		MessageBox("此时不能操作，按“开始”");
	}
}


void CkeyboardDlg::OnBnClickedButton24()
{
		// TODO: 在此添加控件通知处理程序代码
	if (nkey.state)
	{
	nkey.set(6,3);
	show(nkey,6,3);
	inputqueue(6,3);
	}
	else
	{
		MessageBox("此时不能操作，按“开始”");
	}
}


void CkeyboardDlg:: inputqueue(int a,int b){
	rear = (rear+1)%20;
	Buffer20[rear].buf= a*10+b;
	int p=0;
	int yushu;
	CString tmpCStr;
	int tmp = b;
	for (p = 0;p<4;p++){
		yushu = tmp % 2;
		tmp = tmp/2;
		if(yushu == 0){
			Buffer20[rear].CStrbuf.Insert(1,'0');
		}
		else{
			Buffer20[rear].CStrbuf.Insert(1,'1');
		}
	}
	 tmp = a;
	for (p = 0;p<4;p++){
		yushu = tmp % 2;
		tmp = tmp/2;
		if(yushu == 0){
			Buffer20[rear].CStrbuf.Insert(1,'0');
		}
		else{
			Buffer20[rear].CStrbuf.Insert(1,'1');
		}
	}
	
	    regester[count_]=Buffer20[rear].CStrbuf;
		count_=count_+1;
		CSBUF.Insert(1,"\n");
		CSBUF.Insert(1,')');
		CSBUF.Insert(1,Buffer20[rear].CStrbuf);
		CSBUF.Insert(1,'(');
		tmpCStr.Format("%d",b);
		CSBUF.Insert(1,tmpCStr);
		tmpCStr.Format("%d",a);
		CSBUF.Insert(1,tmpCStr);


	//Buffer20[rear].CStrbuf;
	//CSBUF="0\n\n0\n\n0\n\n0\n\n0\n\n0\n\n0";
	GetDlgItem(IDC_CANS2)->SetWindowTextA(CSBUF);
	int counttemp=1;
	char temp[9];
	strncpy(temp,(LPCTSTR)(Buffer20[rear].CStrbuf),sizeof(temp));
	CString temp_out="";
	for(int i=1;i<9;i++)
	{
	temp_out.Insert(counttemp,temp[i]);
	GetDlgItem(IDC_SS32)->SetWindowTextA(temp_out);
	counttemp++;
	Sleep(200);
	}

}
int CkeyboardDlg::outputqueue(){
	int a = 0;
	front=(front+1)%20;   
	Buffer20[front].CStrbuf.Empty();
	Buffer20[front].CStrbuf = " ";
	a = (rear-front)*15;
	CSBUF.Delete(a,15);
	GetDlgItem(IDC_CANS2)->SetWindowTextA(CSBUF);
	return Buffer20[front].buf;

}
//
//扫描初始化
//
void CkeyboardDlg::Zero(){
	CString one="1";
	CString zero="0";
	GetDlgItem(IDC_CANS)->SetWindowTextA(zero);
	GetDlgItem(IDC_RANS)->SetWindowTextA(zero);
	CString rt="0\n\n0\n\n0\n\n0\n\n0\n\n0\n\n0";
	GetDlgItem(IDC_STATIC1)->SetWindowTextA(rt);
	CString ct="0\t\t0\t\t\t0\t\t0";
	GetDlgItem(IDC_STATIC2)->SetWindowTextA(ct);
}
void CkeyboardDlg::show(key k,int i,int j){
	//int num=GetC(k,i);
	/*int m=10;
	CString tm="";
	tm.Format("%d",m);
	GetDlgItem(IDC_STATIC1)->SetWindowTextA(tm);*/

	CString one="1";
	CString zero="0";
	CString row[7]={"1\n\n0\n\n0\n\n0\n\n0\n\n0\n\n0","0\n\n1\n\n0\n\n0\n\n0\n\n0\n\n0","0\n\n0\n\n1\n\n0\n\n0\n\n0\n\n0","0\n\n0\n\n0\n\n1\n\n0\n\n0\n\n0","0\n\n0\n\n0\n\n0\n\n1\n\n0\n\n0","0\n\n0\n\n0\n\n0\n\n0\n\n1\n\n0","0\n\n0\n\n0\n\n0\n\n0\n\n0\n\n1"};
	CString column[4]={"1\t\t0\t\t\t0\t\t0","0\t\t1\t\t\t0\t\t0","0\t\t0\t\t\t1\t\t0","0\t\t0\t\t\t0\t\t1"};
	/*
	初始化
	*/
	Zero();
	/*
	以下扫描列
	*/

	for (int a = 0; a <=j; a++)
	{
		GetDlgItem(IDC_STATIC2)->SetWindowTextA(column[a]);
		if (k.column[a])
		{   
			GetDlgItem(IDC_CANS)->SetWindowTextA(one);
			
			break;
		}else
		{
        GetDlgItem(IDC_CANS)->SetWindowTextA(zero);		
		Sleep(500);
		}
	}

	Sleep(500);


	/*
	以下扫描行
	*/
	for (int a = 0; a <= i; a++)
	{  
		GetDlgItem(IDC_STATIC1)->SetWindowTextA(row[a]);
		if (k.row[a])
		{   
			GetDlgItem(IDC_RANS)->SetWindowTextA(one);
			break;
		}else
		{
        GetDlgItem(IDC_RANS)->SetWindowTextA(zero);		
		Sleep(500);
		}
	}

}




void CkeyboardDlg::initial(){

	int i;
	//int out;
	for(i = 0;i<20;i++){
		Buffer20[i].CStrbuf = "  ";
	}
	CSBUF = " ";
	front = 0;
	rear = 0;

}


void CkeyboardDlg::OnBnClickedButton29()
{   
	Zero();
	nkey.start();
	initial();
	count_=0;
	clock_p=1;
	clock_q=1;//中断控制，寄存器全部准备
	GetDlgItem(IDC_S0)->SetWindowTextA("Waiting");
	GetDlgItem(IDC_SS30)->SetWindowTextA("Working");
	GetDlgItem(IDC_SS32)->SetWindowTextA("Waiting Data");	//正在工作中字符
	GetDlgItem(IDC_S33)->SetWindowTextA("   ");
}




void CkeyboardDlg::OnBnClickedButton31()

{       
	Zero();
	nkey.stop();
	nkey.clear();
	   GetDlgItem(IDC_SS32)->SetWindowTextA("  ");
	    GetDlgItem(IDC_CANS2)->SetWindowTextA("");//缓存全部清0
		GetDlgItem(IDC_S0)->SetWindowTextA("shutdowm");//中断
		times = rear-front;//中断控制
        initial();
		out();

		
}
void CkeyboardDlg::out()
{
	    out_put="";
	    int count=1;
	    for(int temp=0;temp<=count_;temp++)
		{
		out_put.Insert(count,regester[temp]);
		regester[temp]="";
		GetDlgItem(IDC_S33)->SetWindowTextA(out_put);
		count=count+12;
        out_put.Insert(count,"\n");//做不覆盖输出
	    count++;
        Sleep(200);
		}
}


