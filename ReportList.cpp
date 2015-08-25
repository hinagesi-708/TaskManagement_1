#include "ReportList.h"

using namespace TaskManagement;

//詳細データクラス
//コンストラクタ
ReportItem::ReportItem() {
	//フィールドを初期化する
	this->date = DateTime(0);
	this->name = "";
	this->kind = "";
	this->memo = "";
}
//引数を持つコンストラクタ
ReportItem::ReportItem(DateTime date, String^ name, String^ kind, String^ memo) {
	this->date = date;
	this->name = name;
	this->kind = kind;
	this->memo = memo;
}
//表示用メソッド
String^ ReportItem::ToString() {
	return String::Format("{0} {1} {2} {3}", date.ToShortDateString(), name, kind, memo);
}

//詳細リストクラス
//コンストラクタ

ReportList::ReportList()
{
}
