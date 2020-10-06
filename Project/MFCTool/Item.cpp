// Item.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "MFCTool.h"
#include "Item.h"


// CItem
CItem::CItem()
{

}

CItem::~CItem()
{
	Release();
}

HRESULT CItem::Ready_Item()
{
	return E_NOTIMPL;
}

void CItem::Render_Item()
{
}

void CItem::Mini_Render_Item()
{
}

void CItem::Release()
{
}



// CItem 메시지 처리기입니다.


