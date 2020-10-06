#pragma once
#include "afxwin.h"

// CItemTool 대화 상자입니다.

class CItemTool : public CDialog
{
	DECLARE_DYNAMIC(CItemTool)

public:
	CItemTool(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~CItemTool();

	//virtual void OnFinalRelease();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ITEMTOOL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
	//DECLARE_DISPATCH_MAP()
	//DECLARE_INTERFACE_MAP()
public:
	int m_iDrawID;
	afx_msg void OnLbnSelchangeItemList1();
	CListBox _ListBox;
	CStatic _Picture;
	int _DrawID{ 0 };
	afx_msg void OnDropFiles(HDROP hDropInfo);
	void HorizontalScroll();
private:
	class CMFCToolView*   GetView()const&;
};
