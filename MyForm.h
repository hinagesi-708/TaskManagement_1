#pragma once

namespace TaskManagement_1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// MyForm の概要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  ファイルFToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  開くOToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  上書き保存SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  名前を付けて保存AToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  閉じるCToolStripMenuItem;
	private: System::Windows::Forms::DateTimePicker^  dateCalender;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ListBox^  listTask;
	private: System::Windows::Forms::TextBox^  textName;
	private: System::Windows::Forms::TextBox^  textMemo;
	private: System::Windows::Forms::ComboBox^  comboKind;
	private: System::Windows::Forms::Button^  buttonAdd;
	private: System::Windows::Forms::Button^  buttonDelete;

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ファイルFToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->開くOToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->上書き保存SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->名前を付けて保存AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->閉じるCToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dateCalender = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listTask = (gcnew System::Windows::Forms::ListBox());
			this->textName = (gcnew System::Windows::Forms::TextBox());
			this->textMemo = (gcnew System::Windows::Forms::TextBox());
			this->comboKind = (gcnew System::Windows::Forms::ComboBox());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ファイルFToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(618, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ファイルFToolStripMenuItem
			// 
			this->ファイルFToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->開くOToolStripMenuItem,
					this->上書き保存SToolStripMenuItem, this->名前を付けて保存AToolStripMenuItem, this->閉じるCToolStripMenuItem
			});
			this->ファイルFToolStripMenuItem->Name = L"ファイルFToolStripMenuItem";
			this->ファイルFToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->ファイルFToolStripMenuItem->Text = L"ファイル(&F)";
			// 
			// 開くOToolStripMenuItem
			// 
			this->開くOToolStripMenuItem->Name = L"開くOToolStripMenuItem";
			this->開くOToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->開くOToolStripMenuItem->Text = L"開く(&O)";
			// 
			// 上書き保存SToolStripMenuItem
			// 
			this->上書き保存SToolStripMenuItem->Name = L"上書き保存SToolStripMenuItem";
			this->上書き保存SToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->上書き保存SToolStripMenuItem->Text = L"上書き保存(&S)";
			// 
			// 名前を付けて保存AToolStripMenuItem
			// 
			this->名前を付けて保存AToolStripMenuItem->Name = L"名前を付けて保存AToolStripMenuItem";
			this->名前を付けて保存AToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->名前を付けて保存AToolStripMenuItem->Text = L"名前を付けて保存(&A)";
			// 
			// 閉じるCToolStripMenuItem
			// 
			this->閉じるCToolStripMenuItem->Name = L"閉じるCToolStripMenuItem";
			this->閉じるCToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->閉じるCToolStripMenuItem->Text = L"閉じる(&C)";
			// 
			// dateCalender
			// 
			this->dateCalender->Location = System::Drawing::Point(13, 42);
			this->dateCalender->Name = L"dateCalender";
			this->dateCalender->Size = System::Drawing::Size(200, 19);
			this->dateCalender->TabIndex = 1;
			this->dateCalender->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateCalender_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 12);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Taitle:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 12);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Kind:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 131);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 12);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Memo:";
			// 
			// listTask
			// 
			this->listTask->FormattingEnabled = true;
			this->listTask->ItemHeight = 12;
			this->listTask->Location = System::Drawing::Point(247, 42);
			this->listTask->Name = L"listTask";
			this->listTask->Size = System::Drawing::Size(359, 160);
			this->listTask->TabIndex = 5;
			// 
			// textName
			// 
			this->textName->Location = System::Drawing::Point(67, 77);
			this->textName->Name = L"textName";
			this->textName->Size = System::Drawing::Size(146, 19);
			this->textName->TabIndex = 6;
			// 
			// textMemo
			// 
			this->textMemo->Location = System::Drawing::Point(67, 128);
			this->textMemo->Name = L"textMemo";
			this->textMemo->Size = System::Drawing::Size(146, 19);
			this->textMemo->TabIndex = 7;
			// 
			// comboKind
			// 
			this->comboKind->FormattingEnabled = true;
			this->comboKind->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"授業", L"部活", L"習い事", L"その他" });
			this->comboKind->Location = System::Drawing::Point(67, 102);
			this->comboKind->Name = L"comboKind";
			this->comboKind->Size = System::Drawing::Size(146, 20);
			this->comboKind->TabIndex = 8;
			// 
			// buttonAdd
			// 
			this->buttonAdd->Location = System::Drawing::Point(40, 167);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(75, 23);
			this->buttonAdd->TabIndex = 9;
			this->buttonAdd->Text = L"Add";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &MyForm::buttonAdd_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->Location = System::Drawing::Point(138, 167);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(75, 23);
			this->buttonDelete->TabIndex = 10;
			this->buttonDelete->Text = L"Deleate";
			this->buttonDelete->UseVisualStyleBackColor = true;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &MyForm::buttonDelete_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(618, 218);
			this->Controls->Add(this->buttonDelete);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->comboKind);
			this->Controls->Add(this->textMemo);
			this->Controls->Add(this->textName);
			this->Controls->Add(this->listTask);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateCalender);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"TaskManagement";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonAdd_Click(System::Object^  sender, System::EventArgs^  e) {
		Debug::WriteLine("追加ボタンをクリックしました");
		//タイトル，分類，メモを取得する
		String^ name = textName->Text;
		String^ kind = comboKind->Text;
		String^ memo = textMemo->Text;
		//日付取得
		String^ date = dateCalender->Text;
		//フォーマット
		String^ out = String::Format("{0} {1} {2}", name, kind, memo);
		out = date + " " + out;
		//リストに追加
		listTask->Items->Add(out);
	}
private: System::Void buttonDelete_Click(System::Object^  sender, System::EventArgs^  e) {
	//選択している項目を取得
	int index = listTask->SelectedIndex;
	//項目が選択されていない場合
	if (index == -1) {
		return;
	}
	//確認メッセージを表示
	if (MessageBox::Show("本当に削除しますか？", "TaskManagement", MessageBoxButtons::OKCancel) != System::Windows::Forms::DialogResult::OK) {
		return;
	}
	//項目を削除
	listTask->Items->RemoveAt(index);
}
private: System::Void dateCalender_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	listTask->Items->Clear();
}
};
}
