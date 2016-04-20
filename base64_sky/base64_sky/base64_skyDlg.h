// base64_skyDlg.h : 头文件
#include <string>
//

#pragma once


using namespace std;//命名空间

#ifdef _WIN32
#pragma warning(disable:4514)
#endif

class Base64
{
public:
	static inline bool is_base64(unsigned char c) {
		return (isalnum(c) || (c == '+') || (c == '/'));};
		static std::string base64_encode(unsigned char const* , unsigned int len);
		static std::string base64_decode(std::string const& s);
};

static const std::string base64_chars = 
"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz"
"+/";


// Cbase64_skyDlg 对话框
class Cbase64_skyDlg : public CDialog
{
// 构造
public:
	Cbase64_skyDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_BASE64_SKY_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


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
	CString m_source;
public:
	CString m_destination;
public:
	afx_msg void OnBnClickedjiami();
public:
	afx_msg void OnBnClickedjiemi();
public:
	afx_msg void OnBnClickedclean();
};

