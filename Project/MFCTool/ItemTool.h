#pragma once
#include "afxwin.h"

// CItemTool ��ȭ �����Դϴ�.

class CItemTool : public CDialog
{
	DECLARE_DYNAMIC(CItemTool)

public:
	CItemTool(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CItemTool();

	//virtual void OnFinalRelease();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ITEMTOOL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
	//DECLARE_DISPATCH_MAP()
	//DECLARE_INTERFACE_MAP()
public:
	CListBox m_ListBox;
	int m_iDrawID;
	afx_msg void OnLbnSelchangeItemList1();
	CListBox _ListBox;
	CStatic _Picture;
	int _DrawID{ 0 };

private:
	class CMFCToolView*   GetView()const&;
};