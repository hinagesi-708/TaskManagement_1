#pragma once

namespace TaskManagement {
	using namespace System;
	//詳細データクラス
	ref class ReportItem {
	private:
		DateTime	date;
		String^		name;
		String^		kind;
		String^		memo;
	public:
		ReportItem();
		ReportItem(DateTime date, String^ name, String^ kind, String^ memo);
	public:
		//表示用メソッド
		virtual String^ ToString() override;
	public:
		//プロパティ設定
		property DateTime Date {
			DateTime get() { return this->date; }
			void set(DateTime value) { this->date = value; }
		}
		property String^ Name {
			String^ get() { return this->name; }
			void set(String^ value) { this->name = value; }
		}
		property String^ Kind {
			String^ get() { return this->kind; }
			void set(String^ value) { this->kind = value; }
		}
		property String^ Memo {
			String^ get() { return this->memo; }
			void set(String^ value) { this->memo = value; }
		}
	};
	//詳細リストクラス
	ref class ReportList
	{
	public:
		ReportList();
	};
}

