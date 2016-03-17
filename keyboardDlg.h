
// keyboardDlg.h : 头文件
//

#pragma once
#include "key.h"

// CkeyboardDlg 对话框
class CkeyboardDlg : public CDialogEx
{
// 构造
public:
	CkeyboardDlg(CWnd* pParent = NULL);	// 标准构造函数
	
// 对话框数据
	enum { IDD = IDD_KEYBOARD_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持
	key nkey;
	bool state;
	struct  Buffer{
		int buf;
		CString CStrbuf;
	};

	Buffer  Buffer20[20];
	CString regester[20];   
	int  front;
	int  rear;
	int  times;
	int  count_;
	CString out_put;
	CString CSBUF;
	bool clock_p;
	bool clock_q;
	bool output;
	bool stop;
// 实现
protected:
	HICON m_hIcon;
	
	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton25();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButton26();
	afx_msg void OnBnClickedButton13();
	afx_msg void OnBnClickedButton14();
	afx_msg void OnBnClickedButton15();
	afx_msg void OnBnClickedButton16();
	afx_msg void OnBnClickedButton17();
	afx_msg void OnBnClickedButton18();
	afx_msg void OnBnClickedButton27();
	afx_msg void OnBnClickedButton19();
	afx_msg void OnBnClickedButton20();
	afx_msg void OnBnClickedButton21();
	afx_msg void OnBnClickedButton22();
	afx_msg void OnBnClickedButton23();
	afx_msg void OnBnClickedButton24();
	void show(key k,int i,int j);
	void inputqueue(int a,int b);
	int  outputqueue();
	void initial();
	void regester_();
	void out();
	void Zero();
	afx_msg void OnBnClickedButton29();
	afx_msg void OnBnClickedButton31();
	
};
