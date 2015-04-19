#pragma once
#include <windows.h>
#include <cstdlib>
#include <cstdio>
#include <stdio.h>
#include <string>
#include <msclr/marshal_cppstd.h>

namespace Project2 {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Graph* kruskalgraph;
		Graph* MinimumGraph;
		EdgeListNode* KruskalTemp;
		EdgeListNode* Temp;
		int KruskalStep;
		bool cycle;

		bool GOINGTHROUGHKRUSKALS;
		//Edges to and from Vertex A
		bool a2b;
		bool a2c;
		bool a2d;
		bool a2e;
		bool a2f;
		bool a2g;
		//Edges to and from Vertex B
		bool b2c;
		bool b2d;
		bool b2e;
		bool b2f;
		bool b2g;
		//Edges to and from Vertex C
		bool c2d;
		bool c2e;
		bool c2f;
		bool c2g;
		//Edges to and from Vertex D
		bool d2e;
		bool d2f;
		bool d2g;
		//Edges to and from Vertex E
		bool e2f;
		bool e2g;
		//Edge to and from Vertex f
		bool f2g;
		
		
		
		//for Kruskal computation
		bool a2b2;
		bool a2c2;
		bool a2d2;
		bool a2e2;
		bool a2f2;
		bool a2g2;
		//Edges to and from Vertex B
		bool b2c2;
		bool b2d2;
		bool b2e2;
		bool b2f2;
		bool b2g2;
		//Edges to and from Vertex C
		bool c2d2;
		bool c2e2;
		bool c2f2;
		bool c2g2;
		//Edges to and from Vertex D
		bool d2e2;
		bool d2f2;
		bool d2g2;
		//Edges to and from Vertex E
		bool e2f2;
		bool e2g2;
		//Edge to and from Vertex f
		bool f2g2;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button4;

	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Label^  StepS;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	public:
		

		MyForm(void)
		{
			InitializeComponent();
			kruskalgraph = new Graph;
			MinimumGraph = new Graph;
			Temp = NULL;
			KruskalStep = 0;
			StepS->Text = "Step 0";
			//Kruskals group Box
			button4->Visible = false;

			groupBox3->Visible = false;
			GOINGTHROUGHKRUSKALS = false;
			button4->Visible = false;

			StepS->Text = "";

			label27->Text = "";
			label28->Text = "";
			label29->Text = "";
			label30->Text = "";
			label31->Text = "";
			label32->Text = "";
			label33->Text = "";
			label34->Text = "";
			label35->Text = "";
			label36->Text = "";
			label37->Text = "";
			label38->Text = "";
			label39->Text = "";
			label40->Text = "";
			label41->Text = "";
			label42->Text = "";
			label43->Text = "";
			label44->Text = "";
			label45->Text = "";
			label46->Text = "";
			label47->Text = "";

			//Edges to and from Vertex A
			a2b = false;
			a2c = false;
			a2d = false;
			a2e = false;
			a2f = false;
			a2g = false;
			//Edges to and from Vertex B
			b2c = false;
			b2d = false;
			b2e = false;
			b2f = false;
			b2g = false;
			//Edges to and from Vertex C
			c2d = false;
			c2e = false;
			c2f = false;
			c2g = false;
			//Edges to and from Vertex D
			d2e = false;
			d2f = false;
			d2g = false;
			//Edges to and from Vertex E
			e2f = false;
			e2g = false;
			//Edge to and from Vertex f
			f2g = false;


			//For Kruskal computation
			//Edges to and from Vertex A
			a2b2 = false;
			a2c2 = false;
			a2d2 = false;
			a2e2 = false;
			a2f2 = false;
			a2g2 = false;
			//Edges to and from Vertex B
			b2c2 = false;
			b2d2 = false;
			b2e2 = false;
			b2f2 = false;
			b2g2 = false;
			//Edges to and from Vertex C
			c2d2 = false;
			c2e2 = false;
			c2f2 = false;
			c2g2 = false;
			//Edges to and from Vertex D
			d2e2 = false;
			d2f2 = false;
			d2g2 = false;
			//Edges to and from Vertex E
			e2f2 = false;
			e2g2 = false;
			//Edge to and from Vertex f
			f2g2 = false;


			//Empty the labels
			label5->Text = "";
			label6->Text = "";
			label7->Text = "";
			label8->Text = "";
			label9->Text = "";
			label10->Text = "";
			label11->Text = "";
			label12->Text = "";
			label13->Text = "";
			label14->Text = "";
			label15->Text = "";
			label16->Text = "";
			label17->Text = "";
			label18->Text = "";
			label19->Text = "";
			label20->Text = "";
			label21->Text = "";
			label22->Text = "";
			label23->Text = "";
			label24->Text = "";
			label25->Text = "";
			/*
			//Initialize Vertices to invisible
			pictureBox1->Visible = false;
			pictureBox2->Visible = false;
			pictureBox3->Visible = false;
			pictureBox4->Visible = false;
			pictureBox5->Visible = false;
			pictureBox6->Visible = false;
			pictureBox7->Visible = false;
			*/
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->StepS = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(239, 57);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(60, 66);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(107, 129);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(60, 66);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(41, 273);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(60, 66);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(371, 129);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(60, 66);
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(437, 273);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(60, 66);
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(305, 417);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(60, 66);
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(173, 417);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(60, 66);
			this->pictureBox7->TabIndex = 6;
			this->pictureBox7->TabStop = false;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"2 Vertices", L"3 Vertices", L"4 Vertices", L"5 Vertices",
					L"6 Vertices", L"7 Vertices"
			});
			this->comboBox1->Location = System::Drawing::Point(12, 25);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 8;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Number of Vertices";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label26);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(700, 25);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(230, 147);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Edges";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(25, 131);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(53, 13);
			this->label26->TabIndex = 5;
			this->label26->Text = L"error label";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(33, 71);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Edge Weight";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 45);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Destination Vertex:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Source Vertex:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(108, 68);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(34, 97);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Add Edge";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(108, 42);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(108, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(198, 132);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(25, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"a2b";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(182, 199);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(25, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"a2c";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(316, 132);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(25, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"a2d";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(330, 199);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(25, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"a2e";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(293, 326);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(22, 13);
			this->label9->TabIndex = 16;
			this->label9->Text = L"a2f";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(203, 326);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(25, 13);
			this->label10->TabIndex = 17;
			this->label10->Text = L"a2g";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(84, 227);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(25, 13);
			this->label11->TabIndex = 18;
			this->label11->Text = L"b2c";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(248, 159);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(25, 13);
			this->label12->TabIndex = 19;
			this->label12->Text = L"b2d";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(302, 236);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(25, 13);
			this->label13->TabIndex = 20;
			this->label13->Text = L"b2e";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(268, 357);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(22, 13);
			this->label14->TabIndex = 21;
			this->label14->Text = L"b2f";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(149, 374);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(25, 13);
			this->label15->TabIndex = 22;
			this->label15->Text = L"b2g";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(170, 257);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(25, 13);
			this->label16->TabIndex = 23;
			this->label16->Text = L"c2d";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(251, 292);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(25, 13);
			this->label17->TabIndex = 24;
			this->label17->Text = L"c2e";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(236, 374);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(22, 13);
			this->label18->TabIndex = 25;
			this->label18->Text = L"c2f";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(108, 357);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(25, 13);
			this->label19->TabIndex = 26;
			this->label19->Text = L"c2g";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(423, 227);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(25, 13);
			this->label20->TabIndex = 27;
			this->label20->Text = L"d2e";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(343, 347);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(22, 13);
			this->label21->TabIndex = 28;
			this->label21->Text = L"d2f";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(316, 273);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(25, 13);
			this->label22->TabIndex = 29;
			this->label22->Text = L"d2g";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(396, 405);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(22, 13);
			this->label23->TabIndex = 30;
			this->label23->Text = L"e2f";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(378, 374);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(25, 13);
			this->label24->TabIndex = 31;
			this->label24->Text = L"e2g";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(251, 445);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(22, 13);
			this->label25->TabIndex = 32;
			this->label25->Text = L"f2g";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->StepS);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Location = System::Drawing::Point(417, 9);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(195, 100);
			this->groupBox2->TabIndex = 33;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Kruskal\'s Algorithm";
			// 
			// StepS
			// 
			this->StepS->AutoSize = true;
			this->StepS->Location = System::Drawing::Point(20, 48);
			this->StepS->Name = L"StepS";
			this->StepS->Size = System::Drawing::Size(81, 13);
			this->StepS->TabIndex = 4;
			this->StepS->Text = L"Whatstepamion";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(23, 71);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Next";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(23, 19);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Begin";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(10, 18);
			this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(41, 13);
			this->label27->TabIndex = 34;
			this->label27->Text = L"label27";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(10, 31);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(41, 13);
			this->label28->TabIndex = 35;
			this->label28->Text = L"label28";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(10, 44);
			this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(41, 13);
			this->label29->TabIndex = 36;
			this->label29->Text = L"label29";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(10, 57);
			this->label30->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(41, 13);
			this->label30->TabIndex = 37;
			this->label30->Text = L"label30";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(10, 70);
			this->label31->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(41, 13);
			this->label31->TabIndex = 38;
			this->label31->Text = L"label31";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(10, 83);
			this->label32->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(41, 13);
			this->label32->TabIndex = 39;
			this->label32->Text = L"label32";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(10, 97);
			this->label33->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(41, 13);
			this->label33->TabIndex = 40;
			this->label33->Text = L"label33";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(10, 110);
			this->label34->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(41, 13);
			this->label34->TabIndex = 41;
			this->label34->Text = L"label34";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(10, 123);
			this->label35->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(41, 13);
			this->label35->TabIndex = 42;
			this->label35->Text = L"label35";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(10, 136);
			this->label36->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(41, 13);
			this->label36->TabIndex = 43;
			this->label36->Text = L"label36";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(10, 149);
			this->label37->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(41, 13);
			this->label37->TabIndex = 44;
			this->label37->Text = L"label37";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(10, 162);
			this->label38->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(41, 13);
			this->label38->TabIndex = 54;
			this->label38->Text = L"label38";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(10, 175);
			this->label39->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(41, 13);
			this->label39->TabIndex = 53;
			this->label39->Text = L"label39";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(10, 188);
			this->label40->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(41, 13);
			this->label40->TabIndex = 52;
			this->label40->Text = L"label40";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(10, 201);
			this->label41->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(41, 13);
			this->label41->TabIndex = 51;
			this->label41->Text = L"label41";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(10, 214);
			this->label42->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(41, 13);
			this->label42->TabIndex = 50;
			this->label42->Text = L"label42";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(10, 226);
			this->label43->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(41, 13);
			this->label43->TabIndex = 49;
			this->label43->Text = L"label43";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(10, 239);
			this->label44->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(41, 13);
			this->label44->TabIndex = 48;
			this->label44->Text = L"label44";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(10, 252);
			this->label45->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(41, 13);
			this->label45->TabIndex = 47;
			this->label45->Text = L"label45";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(10, 265);
			this->label46->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(41, 13);
			this->label46->TabIndex = 46;
			this->label46->Text = L"label46";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(10, 278);
			this->label47->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(41, 13);
			this->label47->TabIndex = 45;
			this->label47->Text = L"label47";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label46);
			this->groupBox3->Controls->Add(this->label38);
			this->groupBox3->Controls->Add(this->label27);
			this->groupBox3->Controls->Add(this->label39);
			this->groupBox3->Controls->Add(this->label28);
			this->groupBox3->Controls->Add(this->label40);
			this->groupBox3->Controls->Add(this->label29);
			this->groupBox3->Controls->Add(this->label41);
			this->groupBox3->Controls->Add(this->label30);
			this->groupBox3->Controls->Add(this->label42);
			this->groupBox3->Controls->Add(this->label31);
			this->groupBox3->Controls->Add(this->label43);
			this->groupBox3->Controls->Add(this->label32);
			this->groupBox3->Controls->Add(this->label44);
			this->groupBox3->Controls->Add(this->label33);
			this->groupBox3->Controls->Add(this->label45);
			this->groupBox3->Controls->Add(this->label34);
			this->groupBox3->Controls->Add(this->label35);
			this->groupBox3->Controls->Add(this->label47);
			this->groupBox3->Controls->Add(this->label36);
			this->groupBox3->Controls->Add(this->label37);
			this->groupBox3->Location = System::Drawing::Point(625, 191);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2);
			this->groupBox3->Size = System::Drawing::Size(206, 297);
			this->groupBox3->TabIndex = 55;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Edges";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(959, 501);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::On_Paint);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
		 //This Adds Edges!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {// ADD EDGE
	
	if ((textBox1->Text->Length == 0) || (textBox2->Text->Length == 0) || (textBox3->Text->Length == 0))
	{
		label26->Text = "Unable to add Edge";
		return;
	}
	
	
	
	if ((a2b == true) && (((textBox1->Text == "a") && (textBox2->Text == "b")) || ((textBox1->Text == "b") && (textBox2->Text == "a"))))
	{
		label26->Text = "Edge already exists";
		return;
	}
	if ((a2c == true) && (((textBox1->Text == "a") && (textBox2->Text == "c")) || ((textBox1->Text == "c") && (textBox2->Text == "a"))))
	{
		label26->Text = "Edge already exists";
		return;
	}
	if ((a2d == true) && (((textBox1->Text == "a") && (textBox2->Text == "d")) || ((textBox1->Text == "d") && (textBox2->Text == "a"))))
	{
		label26->Text = "Edge already exists";
		return;
	}
	if ((a2e == true) && (((textBox1->Text == "a") && (textBox2->Text == "e")) || ((textBox1->Text == "e") && (textBox2->Text == "a"))))
	{
		label26->Text = "Edge already exists";
		return;
	}
	if ((a2f == true) && (((textBox1->Text == "a") && (textBox2->Text == "f")) || ((textBox1->Text == "f") && (textBox2->Text == "a"))))
	{
		label26->Text = "Edge already exists";
		return;
	}
	if ((a2g == true) && (((textBox1->Text == "a") && (textBox2->Text == "g")) || ((textBox1->Text == "g") && (textBox2->Text == "a"))))
	{
		label26->Text = "Edge already exists";
		return;
	}
	//Edges to and from Vertex B
	if ((b2c == true) && (((textBox1->Text == "c") && (textBox2->Text == "b")) || ((textBox1->Text == "b") && (textBox2->Text == "c"))))
	{
		label26->Text = "Edge already exists";
		return;
	}
	if ((b2d == true) && (((textBox1->Text == "d") && (textBox2->Text == "b")) || ((textBox1->Text == "b") && (textBox2->Text == "d"))))
	{
		label26->Text = "Edge already exists";
		return;
	}
	if ((b2e == true) && (((textBox1->Text == "e") && (textBox2->Text == "b")) || ((textBox1->Text == "b") && (textBox2->Text == "e"))))
	{
		label26->Text = "Edge already exists";
		return;
	}
	if ((b2f == true) && (((textBox1->Text == "f") && (textBox2->Text == "b")) || ((textBox1->Text == "b") && (textBox2->Text == "f"))))
	{
		label26->Text = "Edge already exists";
		return;
	}
	if ((b2g == true) && (((textBox1->Text == "g") && (textBox2->Text == "b")) || ((textBox1->Text == "b") && (textBox2->Text == "g"))))
	{
		label26->Text = "Edge already exists";
		return;
	}
	//Edges to and from Vertex C
	if ((c2d == true) && (((textBox1->Text == "d") && (textBox2->Text == "c")) || ((textBox1->Text == "c") && (textBox2->Text == "d"))))
	{
		label26->Text = "Edge already exists";
		return;
	}
	if ((c2e == true) && (((textBox1->Text == "e") && (textBox2->Text == "c")) || ((textBox1->Text == "c") && (textBox2->Text == "e"))))
	{
		label26->Text = "Edge already exists";
		return;
	}
	if ((c2f == true) && (((textBox1->Text == "f") && (textBox2->Text == "c")) || ((textBox1->Text == "c") && (textBox2->Text == "f"))))
	{
		label26->Text = "Edge already exists";
		return;
	}
	if ((c2g == true) && (((textBox1->Text == "g") && (textBox2->Text == "c")) || ((textBox1->Text == "c") && (textBox2->Text == "g"))))
	{
		label26->Text = "Edge already exists";
		return;
	}
	//Edges to and from Vertex D
	if ((d2e == true) && (((textBox1->Text == "d") && (textBox2->Text == "e")) || ((textBox1->Text == "e") && (textBox2->Text == "d"))))
	{
		label26->Text = "Edge already exists";
		return;
	}
	if ((d2f == true) && (((textBox1->Text == "d") && (textBox2->Text == "f")) || ((textBox1->Text == "f") && (textBox2->Text == "d"))))
	{
		label26->Text = "Edge already exists";
		return;
	}
	if ((d2g == true) && (((textBox1->Text == "d") && (textBox2->Text == "g")) || ((textBox1->Text == "g") && (textBox2->Text == "d"))))
	{
		label26->Text = "Edge already exists";
		return;
	}
	//Edges to and from Vertex E
	if ((e2f == true) && (((textBox1->Text == "f") && (textBox2->Text == "e")) || ((textBox1->Text == "e") && (textBox2->Text == "f"))))
	{
		label26->Text = "Edge already exists";
		return;
	}
	if ((e2g == true) && (((textBox1->Text == "g") && (textBox2->Text == "e")) || ((textBox1->Text == "e") && (textBox2->Text == "g"))))
	{
		label26->Text = "Edge already exists";
		return;
	}
	//Edge to and from Vertex f
	if ((f2g == true) && (((textBox1->Text == "f") && (textBox2->Text == "g")) || ((textBox1->Text == "g") && (textBox2->Text == "f"))))
	{
		label26->Text = "Edge already exists";
		return;
	}

	
	switch (kruskalgraph->graphsize)
	{
	case 2: if (textBox1->Text == "c" || textBox2->Text == "c" || textBox1->Text == "d" || textBox2->Text == "d" || textBox1->Text == "e" || textBox2->Text == "e" || textBox1->Text == "f" || textBox2->Text == "f" || textBox1->Text == "g" || textBox2->Text == "g")
	{
		label26->Text = "Vertex Doesn't Exist";
		return;
	}
		break;
	case 3:if(textBox1->Text == "d" || textBox2->Text == "d" || textBox1->Text == "e" || textBox2->Text == "e" || textBox1->Text == "f" || textBox2->Text == "f" || textBox1->Text == "g" || textBox2->Text == "g")
	{
		label26->Text = "Vertex Doesn't Exist";
		return;
	}
		break;
	case 4:if (textBox1->Text == "e" || textBox2->Text == "e" || textBox1->Text == "f" || textBox2->Text == "f" || textBox1->Text == "g" || textBox2->Text == "g")
	{
		label26->Text = "Vertex Doesn't Exist";
		return;
	}
		break;
	case 5:if (textBox1->Text == "f" || textBox2->Text == "f" || textBox1->Text == "g" || textBox2->Text == "g")
	{
		label26->Text = "Vertex Doesn't Exist";
		return;
	}
		break;
	case 6:if (textBox1->Text == "g" || textBox2->Text == "g")
	{
		label26->Text = "Vertex Doesn't Exist";
		return;
	}
		break;
	case 7:
		break;
	}
	if (!kruskalgraph->AddEdge(msclr::interop::marshal_as< std::string >(textBox1->Text), msclr::interop::marshal_as< std::string >(textBox2->Text), int::Parse(textBox3->Text)))
	{
		label26->Text = "Unable to add Edge";
		return;
	}
	

	if ((a2b == false) && ((textBox1->Text == "a") && (textBox2->Text == "b")) || ((textBox1->Text == "b") && (textBox2->Text == "a")))
	{
		a2b = true;
		label5->Text = textBox3->Text;
		this->Invalidate();
		label26->Text = "Edge Added";
		return;
	}
	if ((a2c == false) && ((textBox1->Text == "a") && (textBox2->Text == "c")) || ((textBox1->Text == "c") && (textBox2->Text == "a")))
	{
		a2c = true;
		label6->Text = textBox3->Text;
		this->Invalidate();
		label26->Text = "Edge Added";
		return;
	}
	if ((a2d == false) && ((textBox1->Text == "a") && (textBox2->Text == "d")) || ((textBox1->Text == "d") && (textBox2->Text == "a")))
	{
		a2d = true;
		label7->Text = textBox3->Text;
		this->Invalidate();
		label26->Text = "Edge Added";
		return;
	}
	if ((a2e == false) && ((textBox1->Text == "a") && (textBox2->Text == "e")) || ((textBox1->Text == "e") && (textBox2->Text == "a")))
	{
		a2e = true;
		label8->Text = textBox3->Text;
		this->Invalidate();
		label26->Text = "Edge Added";
		return;
	}
	if ((a2f == false) && ((textBox1->Text == "a") && (textBox2->Text == "f")) || ((textBox1->Text == "f") && (textBox2->Text == "a")))
	{
		a2f = true;
		label9->Text = textBox3->Text;
		this->Invalidate();
		label26->Text = "Edge Added";
		return;
	}
	if ((a2g == false) && ((textBox1->Text == "a") && (textBox2->Text == "g")) || ((textBox1->Text == "g") && (textBox2->Text == "a")))
	{
		a2g = true;
		label10->Text = textBox3->Text;
		this->Invalidate();
		label26->Text = "Edge Added";
		return;
	}
	//Edges to and from Vertex B
	if ((b2c == false) && ((textBox1->Text == "c") && (textBox2->Text == "b")) || ((textBox1->Text == "b") && (textBox2->Text == "c")))
	{
		b2c = true;
		label11->Text = textBox3->Text;
		this->Invalidate();
		label26->Text = "Edge Added";
		return;
	}
	if ((b2d == false) && ((textBox1->Text == "d") && (textBox2->Text == "b")) || ((textBox1->Text == "b") && (textBox2->Text == "d")))
	{
		b2d = true;
		label12->Text = textBox3->Text;
		this->Invalidate();
		label26->Text = "Edge Added";
		return;
	}
	if ((b2e == false) && ((textBox1->Text == "e") && (textBox2->Text == "b")) || ((textBox1->Text == "b") && (textBox2->Text == "e")))
	{
		b2e = true;
		label13->Text = textBox3->Text;
		this->Invalidate();
		label26->Text = "Edge Added";
		return;
	}
	if ((b2f == false) && ((textBox1->Text == "f") && (textBox2->Text == "b")) || ((textBox1->Text == "b") && (textBox2->Text == "f")))
	{
		b2f = true;
		label14->Text = textBox3->Text;
		this->Invalidate();
		label26->Text = "Edge Added";;
		return;
	}
	if ((b2g == false) && ((textBox1->Text == "g") && (textBox2->Text == "b")) || ((textBox1->Text == "b") && (textBox2->Text == "g")))
	{
		b2g = true;
		label15->Text = textBox3->Text;
		this->Invalidate();
		label26->Text = "Edge Added";
		return;
	}
	//Edges to and from Vertex C
	if ((c2d == false) && ((textBox1->Text == "d") && (textBox2->Text == "c")) || ((textBox1->Text == "c") && (textBox2->Text == "d")))
	{
		c2d = true;
		label16->Text = textBox3->Text;
		this->Invalidate();
		label26->Text = "Edge Added";
		return;
	}
	if ((c2e == false) && ((textBox1->Text == "e") && (textBox2->Text == "c")) || ((textBox1->Text == "c") && (textBox2->Text == "e")))
	{
		c2e = true;
		label17->Text = textBox3->Text;
		this->Invalidate();
		label26->Text = "Edge Added";
		return;
	}
	if ((c2f == false) && ((textBox1->Text == "f") && (textBox2->Text == "c")) || ((textBox1->Text == "c") && (textBox2->Text == "f")))
	{
		c2f = true;
		label18->Text = textBox3->Text;
		this->Invalidate();
		label26->Text = "Edge Added";
		return;
	}
	if ((c2g == false) && ((textBox1->Text == "g") && (textBox2->Text == "c")) || ((textBox1->Text == "c") && (textBox2->Text == "g")))
	{
		c2g = true;
		label19->Text = textBox3->Text;
		this->Invalidate();
		label26->Text = "Edge Added";
		return;
	}
	//Edges to and from Vertex D
	if ((d2e == false) && ((textBox1->Text == "d") && (textBox2->Text == "e")) || ((textBox1->Text == "e") && (textBox2->Text == "d")))
	{
		d2e = true;
		label20->Text = textBox3->Text;
		this->Invalidate();
		label26->Text = "Edge Added";
		return;
	}
	if ((d2f == false) && ((textBox1->Text == "d") && (textBox2->Text == "f")) || ((textBox1->Text == "f") && (textBox2->Text == "d")))
	{
		d2f = true;
		label21->Text = textBox3->Text;
		this->Invalidate();
		label26->Text = "Edge Added";
		return;
	}
	if ((d2g == false) && ((textBox1->Text == "d") && (textBox2->Text == "g")) || ((textBox1->Text == "g") && (textBox2->Text == "d")))
	{
		d2g = true;
		label22->Text = textBox3->Text;
		this->Invalidate();
		label26->Text = "Edge Added";
		return;
	}
	//Edges to and from Vertex E
	if ((e2f == false) && ((textBox1->Text == "f") && (textBox2->Text == "e")) || ((textBox1->Text == "e") && (textBox2->Text == "f")))
	{
		e2f = true;
		label23->Text = textBox3->Text;
		this->Invalidate();
		label26->Text = "Edge Added";
		return;
	}
	if ((e2g == false) && ((textBox1->Text == "g") && (textBox2->Text == "e")) || ((textBox1->Text == "e") && (textBox2->Text == "g")))
	{
		e2g = true;
		label24->Text = textBox3->Text;
		this->Invalidate();
		label26->Text = "Edge Added";
		return;
	}
	//Edge to and from Vertex f
	if ((f2g == false) && ((textBox1->Text == "f") && (textBox2->Text == "g")) || ((textBox1->Text == "g") && (textBox2->Text == "f")))
	{
		f2g = true;
		label25->Text = textBox3->Text;
		this->Invalidate();
		label26->Text = "Edge Added";
		return;
	}

}// ADD EDGES!!!!!!!!!!!!!!!!
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->Text == "2 Vertices")
	{
		kruskalgraph->graphsize = 2;
		pictureBox1->Visible = true;
		pictureBox2->Visible = true;
		pictureBox3->Visible = false;
		pictureBox4->Visible = false;
		pictureBox5->Visible = false;
		pictureBox6->Visible = false;
		pictureBox7->Visible = false;
		//Edges to and from Vertex A
		a2b = false;
		a2c = false;
		a2d = false;
		a2e = false;
		a2f = false;
		a2g = false;
		//Edges to and from Vertex B
		b2c = false;
		b2d = false;
		b2e = false;
		b2f = false;
		b2g = false;
		//Edges to and from Vertex C
		c2d = false;
		c2e = false;
		c2f = false;
		c2g = false;
		//Edges to and from Vertex D
		d2e = false;
		d2f = false;
		d2g = false;
		//Edges to and from Vertex E
		e2f = false;
		e2g = false;
		//Edge to and from Vertex f
		f2g = false;


		//For Kruskal computation
		//Edges to and from Vertex A
		a2b2 = false;
		a2c2 = false;
		a2d2 = false;
		a2e2 = false;
		a2f2 = false;
		a2g2 = false;
		//Edges to and from Vertex B
		b2c2 = false;
		b2d2 = false;
		b2e2 = false;
		b2f2 = false;
		b2g2 = false;
		//Edges to and from Vertex C
		c2d2 = false;
		c2e2 = false;
		c2f2 = false;
		c2g2 = false;
		//Edges to and from Vertex D
		d2e2 = false;
		d2f2 = false;
		d2g2 = false;
		//Edges to and from Vertex E
		e2f2 = false;
		e2g2 = false;
		//Edge to and from Vertex f
		f2g2 = false;
		kruskalgraph->MakeEmpty();
		this->Invalidate();
	}
	if (comboBox1->Text == "3 Vertices")
	{
		kruskalgraph->graphsize = 3;
		pictureBox1->Visible = true;
		pictureBox2->Visible = true;
		pictureBox3->Visible = true;
		pictureBox4->Visible = false;
		pictureBox5->Visible = false;
		pictureBox6->Visible = false;
		pictureBox7->Visible = false;
		//Edges to and from Vertex A
		a2b = false;
		a2c = false;
		a2d = false;
		a2e = false;
		a2f = false;
		a2g = false;
		//Edges to and from Vertex B
		b2c = false;
		b2d = false;
		b2e = false;
		b2f = false;
		b2g = false;
		//Edges to and from Vertex C
		c2d = false;
		c2e = false;
		c2f = false;
		c2g = false;
		//Edges to and from Vertex D
		d2e = false;
		d2f = false;
		d2g = false;
		//Edges to and from Vertex E
		e2f = false;
		e2g = false;
		//Edge to and from Vertex f
		f2g = false;


		//For Kruskal computation
		//Edges to and from Vertex A
		a2b2 = false;
		a2c2 = false;
		a2d2 = false;
		a2e2 = false;
		a2f2 = false;
		a2g2 = false;
		//Edges to and from Vertex B
		b2c2 = false;
		b2d2 = false;
		b2e2 = false;
		b2f2 = false;
		b2g2 = false;
		//Edges to and from Vertex C
		c2d2 = false;
		c2e2 = false;
		c2f2 = false;
		c2g2 = false;
		//Edges to and from Vertex D
		d2e2 = false;
		d2f2 = false;
		d2g2 = false;
		//Edges to and from Vertex E
		e2f2 = false;
		e2g2 = false;
		//Edge to and from Vertex f
		f2g2 = false;
		kruskalgraph->MakeEmpty();
		this->Invalidate();
	}
	if (comboBox1->Text == "4 Vertices")
	{
		kruskalgraph->graphsize = 4;
		pictureBox1->Visible = true;
		pictureBox2->Visible = true;
		pictureBox3->Visible = true;
		pictureBox4->Visible = true;
		pictureBox5->Visible = false;
		pictureBox6->Visible = false;
		pictureBox7->Visible = false;
		//Edges to and from Vertex A
		a2b = false;
		a2c = false;
		a2d = false;
		a2e = false;
		a2f = false;
		a2g = false;
		//Edges to and from Vertex B
		b2c = false;
		b2d = false;
		b2e = false;
		b2f = false;
		b2g = false;
		//Edges to and from Vertex C
		c2d = false;
		c2e = false;
		c2f = false;
		c2g = false;
		//Edges to and from Vertex D
		d2e = false;
		d2f = false;
		d2g = false;
		//Edges to and from Vertex E
		e2f = false;
		e2g = false;
		//Edge to and from Vertex f
		f2g = false;


		//For Kruskal computation
		//Edges to and from Vertex A
		a2b2 = false;
		a2c2 = false;
		a2d2 = false;
		a2e2 = false;
		a2f2 = false;
		a2g2 = false;
		//Edges to and from Vertex B
		b2c2 = false;
		b2d2 = false;
		b2e2 = false;
		b2f2 = false;
		b2g2 = false;
		//Edges to and from Vertex C
		c2d2 = false;
		c2e2 = false;
		c2f2 = false;
		c2g2 = false;
		//Edges to and from Vertex D
		d2e2 = false;
		d2f2 = false;
		d2g2 = false;
		//Edges to and from Vertex E
		e2f2 = false;
		e2g2 = false;
		//Edge to and from Vertex f
		f2g2 = false;
		kruskalgraph->MakeEmpty();
		this->Invalidate();
	}
	if (comboBox1->Text == "5 Vertices")
	{
		kruskalgraph->graphsize = 5;
		pictureBox1->Visible = true;
		pictureBox2->Visible = true;
		pictureBox3->Visible = true;
		pictureBox4->Visible = true;
		pictureBox5->Visible = true;
		pictureBox6->Visible = false;
		pictureBox7->Visible = false;
		//Edges to and from Vertex A
		a2b = false;
		a2c = false;
		a2d = false;
		a2e = false;
		a2f = false;
		a2g = false;
		//Edges to and from Vertex B
		b2c = false;
		b2d = false;
		b2e = false;
		b2f = false;
		b2g = false;
		//Edges to and from Vertex C
		c2d = false;
		c2e = false;
		c2f = false;
		c2g = false;
		//Edges to and from Vertex D
		d2e = false;
		d2f = false;
		d2g = false;
		//Edges to and from Vertex E
		e2f = false;
		e2g = false;
		//Edge to and from Vertex f
		f2g = false;


		//For Kruskal computation
		//Edges to and from Vertex A
		a2b2 = false;
		a2c2 = false;
		a2d2 = false;
		a2e2 = false;
		a2f2 = false;
		a2g2 = false;
		//Edges to and from Vertex B
		b2c2 = false;
		b2d2 = false;
		b2e2 = false;
		b2f2 = false;
		b2g2 = false;
		//Edges to and from Vertex C
		c2d2 = false;
		c2e2 = false;
		c2f2 = false;
		c2g2 = false;
		//Edges to and from Vertex D
		d2e2 = false;
		d2f2 = false;
		d2g2 = false;
		//Edges to and from Vertex E
		e2f2 = false;
		e2g2 = false;
		//Edge to and from Vertex f
		f2g2 = false;
		kruskalgraph->MakeEmpty();
		this->Invalidate();
	}
	if (comboBox1->Text == "6 Vertices")
	{
		kruskalgraph->graphsize = 6;
		pictureBox1->Visible = true;
		pictureBox2->Visible = true;
		pictureBox3->Visible = true;
		pictureBox4->Visible = true;
		pictureBox5->Visible = true;
		pictureBox6->Visible = true;
		pictureBox7->Visible = false;
		//Edges to and from Vertex A
		a2b = false;
		a2c = false;
		a2d = false;
		a2e = false;
		a2f = false;
		a2g = false;
		//Edges to and from Vertex B
		b2c = false;
		b2d = false;
		b2e = false;
		b2f = false;
		b2g = false;
		//Edges to and from Vertex C
		c2d = false;
		c2e = false;
		c2f = false;
		c2g = false;
		//Edges to and from Vertex D
		d2e = false;
		d2f = false;
		d2g = false;
		//Edges to and from Vertex E
		e2f = false;
		e2g = false;
		//Edge to and from Vertex f
		f2g = false;


		//For Kruskal computation
		//Edges to and from Vertex A
		a2b2 = false;
		a2c2 = false;
		a2d2 = false;
		a2e2 = false;
		a2f2 = false;
		a2g2 = false;
		//Edges to and from Vertex B
		b2c2 = false;
		b2d2 = false;
		b2e2 = false;
		b2f2 = false;
		b2g2 = false;
		//Edges to and from Vertex C
		c2d2 = false;
		c2e2 = false;
		c2f2 = false;
		c2g2 = false;
		//Edges to and from Vertex D
		d2e2 = false;
		d2f2 = false;
		d2g2 = false;
		//Edges to and from Vertex E
		e2f2 = false;
		e2g2 = false;
		//Edge to and from Vertex f
		f2g2 = false;
		kruskalgraph->MakeEmpty();
		this->Invalidate();
	}
	if (comboBox1->Text == "7 Vertices")
	{
		kruskalgraph->graphsize = 7;
		pictureBox1->Visible = true;
		pictureBox2->Visible = true;
		pictureBox3->Visible = true;
		pictureBox4->Visible = true;
		pictureBox5->Visible = true;
		pictureBox6->Visible = true;
		pictureBox7->Visible = true;
		//Edges to and from Vertex A
		a2b = false;
		a2c = false;
		a2d = false;
		a2e = false;
		a2f = false;
		a2g = false;
		//Edges to and from Vertex B
		b2c = false;
		b2d = false;
		b2e = false;
		b2f = false;
		b2g = false;
		//Edges to and from Vertex C
		c2d = false;
		c2e = false;
		c2f = false;
		c2g = false;
		//Edges to and from Vertex D
		d2e = false;
		d2f = false;
		d2g = false;
		//Edges to and from Vertex E
		e2f = false;
		e2g = false;
		//Edge to and from Vertex f
		f2g = false;


		//For Kruskal computation
		//Edges to and from Vertex A
		a2b2 = false;
		a2c2 = false;
		a2d2 = false;
		a2e2 = false;
		a2f2 = false;
		a2g2 = false;
		//Edges to and from Vertex B
		b2c2 = false;
		b2d2 = false;
		b2e2 = false;
		b2f2 = false;
		b2g2 = false;
		//Edges to and from Vertex C
		c2d2 = false;
		c2e2 = false;
		c2f2 = false;
		c2g2 = false;
		//Edges to and from Vertex D
		d2e2 = false;
		d2f2 = false;
		d2g2 = false;
		//Edges to and from Vertex E
		e2f2 = false;
		e2g2 = false;
		//Edge to and from Vertex f
		f2g2 = false;
		kruskalgraph->MakeEmpty();
		this->Invalidate();
	}
}
		 //This Draws stuff!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
private: System::Void On_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	Graphics^ g = e->Graphics;
	Pen^ redPen = gcnew Pen(Color::Red);
	redPen->Width = 4;
	if (!GOINGTHROUGHKRUSKALS)
	{
		//edges from and to Vertex A
		if (a2b)
		{
			g->DrawLine(redPen, 266, 122, 164, 161); 
		}
		if (a2c)
		{
			g->DrawLine(redPen, 266, 122, 98, 301); 
		}
		if (a2d)
		{
			g->DrawLine(redPen, 266, 122, 371, 158); 
		}
		if (a2e)
		{
			g->DrawLine(redPen, 266, 122, 437, 300); 
		}
		if (a2f)
		{
			g->DrawLine(redPen, 266, 122, 331, 417); 
		}
		if (a2g)
		{
			g->DrawLine(redPen, 266, 122, 202, 417); 
		}
		//Edges to and from Vertex B
		if (b2c)
		{
			g->DrawLine(redPen, 134, 190, 73, 273); 
		}
		if (b2d)
		{
			g->DrawLine(redPen, 164, 159, 371, 158); 
		}
		if (b2e)
		{
			g->DrawLine(redPen, 164, 159, 437, 301); 
		}
		if (b2f)
		{
			g->DrawLine(redPen, 134, 190, 337, 417); 
		}
		if (b2g)
		{
			g->DrawLine(redPen, 134, 190, 173, 433); 
		}
		//Edges to and from Vertex C
		if (c2d)
		{
			g->DrawLine(redPen, 98, 301, 371, 158); 
		}
		if (c2e)
		{
			g->DrawLine(redPen, 98, 301, 437, 301); 
		}
		if (c2f)
		{
			g->DrawLine(redPen, 98, 301, 337, 417); 
		}
		if (c2g)
		{
			g->DrawLine(redPen, 98, 301, 173, 443); 
		}
		//Edges to and from Vertex D
		if (d2e)
		{
			g->DrawLine(redPen, 401, 192, 461, 273); 
		}
		if (d2f)
		{
			g->DrawLine(redPen, 401, 192, 333, 417); 
		}
		if (d2g)
		{
			g->DrawLine(redPen, 401, 192, 200, 417); 
		}
		//Edges to and from Vertex E
		if (e2f)
		{
			g->DrawLine(redPen, 466, 336, 361, 448); 
		}
		if (e2g)
		{
			g->DrawLine(redPen, 466, 336, 230, 445); 
		}
		//Edge to and from Vertex F
		if (f2g)
		{
			g->DrawLine(redPen, 305, 447, 230, 445); 
		}
	}
	if (GOINGTHROUGHKRUSKALS)
	{
		//edges from and to Vertex A
		if (a2b2)
		{
			g->DrawLine(redPen, 266, 122, 164, 161); label5->Visible = true;
		}
		if (a2c2)
		{
			g->DrawLine(redPen, 266, 122, 98, 301); label6->Visible = true;
		}
		if (a2d2)
		{
			g->DrawLine(redPen, 266, 122, 371, 158); label7->Visible = true;
		}
		if (a2e2)
		{
			g->DrawLine(redPen, 266, 122, 437, 300); label8->Visible = true;
		}
		if (a2f2)
		{
			g->DrawLine(redPen, 266, 122, 331, 417); label9->Visible = true;
		}
		if (a2g2)
		{
			g->DrawLine(redPen, 266, 122, 202, 417); label10->Visible = true;
		}
		//Edges to and from Vertex B
		if (b2c2)
		{
			g->DrawLine(redPen, 134, 190, 73, 273); label11->Visible = true;
		}
		if (b2d2)
		{
			g->DrawLine(redPen, 164, 159, 371, 158); label12->Visible = true;
		}
		if (b2e2)
		{
			g->DrawLine(redPen, 164, 159, 437, 301); label13->Visible = true;
		}
		if (b2f2)
		{
			g->DrawLine(redPen, 134, 190, 337, 417); label14->Visible = true;
		}
		if (b2g2)
		{
			g->DrawLine(redPen, 134, 190, 173, 433); label15->Visible = true;
		}
		//Edges to and from Vertex C
		if (c2d2)
		{
			g->DrawLine(redPen, 98, 301, 371, 158); label16->Visible = true;
		}
		if (c2e2)
		{
			g->DrawLine(redPen, 98, 301, 437, 301); label17->Visible = true;
		}
		if (c2f2)
		{
			g->DrawLine(redPen, 98, 301, 337, 417); label18->Visible = true;
		}
		if (c2g2)
		{
			g->DrawLine(redPen, 98, 301, 173, 443); label19->Visible = true;
		}
		//Edges to and from Vertex D
		if (d2e2)
		{
			g->DrawLine(redPen, 401, 192, 461, 273); label20->Visible = true;
		}
		if (d2f2)
		{
			g->DrawLine(redPen, 401, 192, 333, 417); label21->Visible = true;
		}
		if (d2g2)
		{
			g->DrawLine(redPen, 401, 192, 200, 417); label22->Visible = true;
		}
		//Edges to and from Vertex E
		if (e2f2)
		{
			g->DrawLine(redPen, 466, 336, 361, 448); label23->Visible = true;
		}
		if (e2g2)
		{
			g->DrawLine(redPen, 466, 336, 230, 445); label24->Visible = true;
		}
		//Edge to and from Vertex F
		if (f2g2)
		{
			g->DrawLine(redPen, 305, 447, 230, 445); label25->Visible = true;
		}
	}
}



		 //This STARTS KRUSKALS ALGORITHM!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	GOINGTHROUGHKRUSKALS = true;
	groupBox1->Visible = false;
	button2->Visible = false;
	label5->Visible = false;
	label6->Visible = false;
	label7->Visible = false;
	label8->Visible = false;
	label9->Visible = false;
	label10->Visible = false;
	label11->Visible = false;
	label12->Visible = false;
	label13->Visible = false;
	label14->Visible = false;
	label15->Visible = false;
	label16->Visible = false;
	label17->Visible = false;
	label18->Visible = false;
	label19->Visible = false;
	label20->Visible = false;
	label21->Visible = false;
	label22->Visible = false;
	label23->Visible = false;
	label24->Visible = false;
	label25->Visible = false;
	kruskalgraph->SortEdgeList();
	Temp = kruskalgraph->EdgeList->head1;
	KruskalTemp = Temp;
	if (Temp != NULL)
	{
		label27->Text = gcnew String(Temp->source.c_str()) + "|" + gcnew String(Temp->destination.c_str()) + Temp->weight + "    ";
		Temp = Temp->next;
	}
	if (Temp != NULL)
	{
		label28->Text = gcnew String(Temp->source.c_str()) + "|" + gcnew String(Temp->destination.c_str()) + Temp->weight + "    ";
		Temp = Temp->next;
	}
	if (Temp != NULL)
	{
		label29->Text = gcnew String(Temp->source.c_str()) + "|" + gcnew String(Temp->destination.c_str()) + Temp->weight + "    ";
		Temp = Temp->next;
	}
	if (Temp != NULL)
	{
		label30->Text = gcnew String(Temp->source.c_str()) + "|" + gcnew String(Temp->destination.c_str()) + Temp->weight + "    ";
		Temp = Temp->next;
	}
	if (Temp != NULL)
	{
		label31->Text = gcnew String(Temp->source.c_str()) + "|" + gcnew String(Temp->destination.c_str()) + Temp->weight + "    ";
		Temp = Temp->next;
	}
	if (Temp != NULL)
	{
		label32->Text = gcnew String(Temp->source.c_str()) + "|" + gcnew String(Temp->destination.c_str()) + Temp->weight + "    ";
		Temp = Temp->next;
	}
	if (Temp != NULL)
	{
		label33->Text = gcnew String(Temp->source.c_str()) + "|" + gcnew String(Temp->destination.c_str()) + Temp->weight + "    ";
		Temp = Temp->next;
	}
	if (Temp != NULL)
	{
		label34->Text = gcnew String(Temp->source.c_str()) + "|" + gcnew String(Temp->destination.c_str()) + Temp->weight + "    ";
		Temp = Temp->next;
	}
	if (Temp != NULL)
	{
		label35->Text = gcnew String(Temp->source.c_str()) + "|" + gcnew String(Temp->destination.c_str()) + Temp->weight + "    ";
		Temp = Temp->next;
	}
	if (Temp != NULL)
	{
		label36->Text = gcnew String(Temp->source.c_str()) + "|" + gcnew String(Temp->destination.c_str()) + Temp->weight + "    ";
		Temp = Temp->next;
	}
	if (Temp != NULL)
	{
		label37->Text = gcnew String(Temp->source.c_str()) + "|" + gcnew String(Temp->destination.c_str()) + Temp->weight + "    ";
		Temp = Temp->next;
	}
	if (Temp != NULL)
	{
		label38->Text = gcnew String(Temp->source.c_str()) + "|" + gcnew String(Temp->destination.c_str()) + Temp->weight + "    ";
		Temp = Temp->next;
	}
	if (Temp != NULL)
	{
		label39->Text = gcnew String(Temp->source.c_str()) + "|" + gcnew String(Temp->destination.c_str()) + Temp->weight + "    ";
		Temp = Temp->next;
	}
	if (Temp != NULL)
	{
		label40->Text = gcnew String(Temp->source.c_str()) + "|" + gcnew String(Temp->destination.c_str()) + Temp->weight + "    ";
		Temp = Temp->next;
	}
	if (Temp != NULL)
	{
		label41->Text = gcnew String(Temp->source.c_str()) + "|" + gcnew String(Temp->destination.c_str()) + Temp->weight + "    ";
		Temp = Temp->next;
	}
	if (Temp != NULL)
	{
		label42->Text = gcnew String(Temp->source.c_str()) + "|" + gcnew String(Temp->destination.c_str()) + Temp->weight + "    ";
		Temp = Temp->next;
	}
	if (Temp != NULL)
	{
		label43->Text = gcnew String(Temp->source.c_str()) + "|" + gcnew String(Temp->destination.c_str()) + Temp->weight + "    ";
		Temp = Temp->next;
	}
	if (Temp != NULL)
	{
		label44->Text = gcnew String(Temp->source.c_str()) + "|" + gcnew String(Temp->destination.c_str()) + Temp->weight + "    ";
		Temp = Temp->next;
	}
	if (Temp != NULL)
	{
		label45->Text = gcnew String(Temp->source.c_str()) + "|" + gcnew String(Temp->destination.c_str()) + Temp->weight + "    ";
		Temp = Temp->next;
	}
	if (Temp != NULL)
	{
		label46->Text = gcnew String(Temp->source.c_str()) + "|" + gcnew String(Temp->destination.c_str()) + Temp->weight + "    ";
		Temp = Temp->next;
	}
	if (Temp != NULL)
	{
		label47->Text = gcnew String(Temp->source.c_str()) + "|" + gcnew String(Temp->destination.c_str()) + Temp->weight + "    ";
		Temp = Temp->next;
	}
	
	groupBox3->Visible = true;
	button4->Visible = true;


	


}
		 //steps through kruskals algorithm
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

	//KruskalTemp = kruskalgraph->EdgeList->head1;
	KruskalStep++;
	StepS->Visible = true;
	if (KruskalTemp == NULL)
	{
		StepS->Text = "Finished";
		KruskalStep = 40;
		return;
	}
	if (KruskalTemp != NULL)
	{
		cycle = kruskalgraph->KruskalsTree(KruskalTemp->source, KruskalTemp->destination);
		StepS->Text = "Step " + KruskalStep;
	}
	if (KruskalTemp != NULL)
	{
		
		if (!cycle && (KruskalStep == 1))
		{
			MinimumGraph->AddEdge(KruskalTemp->source, KruskalTemp->destination, KruskalTemp->weight);
			label27->Text += "Used"; 
			//KruskalStep++;
			if ((a2b2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "a"))))
			{
				a2b2 = true;
				//label5->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2c2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "a"))))
			{
				a2c2 = true;
				//label6->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2d2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "d")) || ((KruskalTemp->source == "d") && (KruskalTemp->destination == "a"))))
			{
				a2d2 = true;
				////label7->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2e2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "a"))))
			{
				a2e2 = true;
				//label8->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2f2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "a"))))
			{
				a2f2 = true;
				//label9->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2g2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "a"))))
			{
				a2g2 = true;
				//label10->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex B
			if ((b2c2 == false) && (!cycle) && (((KruskalTemp->source == "c") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "c"))))
			{
				b2c2 = true;
				//label11->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "d"))))
			{
				b2d2 = true;
				//label12->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "e"))))
			{
				b2e2 = true;
				//label13->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "f"))))
			{
				b2f2 = true;
				//label14->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "g"))))
			{
				b2g2 = true;
				//label15->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex C
			if ((c2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "d"))))
			{
				c2d2 = true;
				//label16->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((c2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "e"))))
			{
				c2e2 = true;
				//label17->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((c2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "f"))))
			{
				c2f2 = true;
				//label18->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((c2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "g"))))
			{
				c2g2 = true;
				//label19->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex D
			if ((d2e2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "d"))))
			{
				d2e2 = true;
				//label20->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((d2f2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "d"))))
			{
				d2f2 = true;
				//label21->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((d2g2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "d"))))
			{
				d2g2 = true;
				//label22->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex E
			if ((e2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "f"))))
			{
				e2f2 = true;
				//label23->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((e2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "g"))))
			{
				e2g2 = true;
				//label24->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edge to and from Vertex f
			if ((f2g2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "f"))))
			{
				f2g2 = true;
				//label25->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
		}
		else if(KruskalStep == 1) {
			label27->Text += "not used"; KruskalStep++; KruskalTemp = KruskalTemp->next; return;
		}
		//KruskalTemp = KruskalTemp->next;
	}
	//cycle = kruskalgraph->KruskalsTree(KruskalTemp->source, KruskalTemp->destination);
	//*************************************************************************************************************************************
	//*************************************************************************************************************************************

	if (KruskalTemp != NULL)
	{
		if (!cycle && (KruskalStep == 2))
		{
			MinimumGraph->AddEdge(KruskalTemp->source, KruskalTemp->destination, KruskalTemp->weight);
			label28->Text += "Used";
			//KruskalStep++;
			if ((a2b2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "a"))))
			{
				a2b2 = true;
				//label5->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2c2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "a"))))
			{
				a2c2 = true;
				//label6->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2d2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "d")) || ((KruskalTemp->source == "d") && (KruskalTemp->destination == "a"))))
			{
				a2d2 = true;
				//label7->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2e2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "a"))))
			{
				a2e2 = true;
				//label8->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2f2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "a"))))
			{
				a2f2 = true;
				//label9->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2g2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "a"))))
			{
				a2g2 = true;
				//label10->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex B
			if ((b2c2 == false) && (!cycle) && (((KruskalTemp->source == "c") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "c"))))
			{
				b2c2 = true;
				//label11->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "d"))))
			{
				b2d2 = true;
				//label12->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "e"))))
			{
				b2e2 = true;
				//label13->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "f"))))
			{
				b2f2 = true;
				//label14->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "g"))))
			{
				b2g2 = true;
				//label15->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex C
			if ((c2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "d"))))
			{
				c2d2 = true;
				//label16->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((c2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "e"))))
			{
				c2e2 = true;
				//label17->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((c2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "f"))))
			{
				c2f2 = true;
				//label18->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((c2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "g"))))
			{
				c2g2 = true;
				//label19->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex D
			if ((d2e2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "d"))))
			{
				d2e2 = true;
				//label20->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((d2f2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "d"))))
			{
				d2f2 = true;
				//label21->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((d2g2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "d"))))
			{
				d2g2 = true;
				//label22->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex E
			if ((e2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "f"))))
			{
				e2f2 = true;
				//label23->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((e2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "g"))))
			{
				e2g2 = true;
				//label24->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edge to and from Vertex f
			if ((f2g2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "f"))))
			{
				f2g2 = true;
				//label25->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
		}
		else if(KruskalStep == 2) {
			label28->Text += "not used"; KruskalStep++; KruskalTemp = KruskalTemp->next; return;
		}
		//KruskalTemp = KruskalTemp->next;
	}
	//cycle = kruskalgraph->KruskalsTree(KruskalTemp->source, KruskalTemp->destination);
	//*************************************************************************************************************************************
	//*************************************************************************************************************************************

	if (KruskalTemp != NULL)
	{
		if (!cycle && (KruskalStep == 3))
		{
			MinimumGraph->AddEdge(KruskalTemp->source, KruskalTemp->destination, KruskalTemp->weight);
			label29->Text += "Used";
			//KruskalStep++;
			if ((a2b2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "a"))))
			{
				a2b2 = true;
				//label5->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2c2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "a"))))
			{
				a2c2 = true;
				//label6->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2d2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "d")) || ((KruskalTemp->source == "d") && (KruskalTemp->destination == "a"))))
			{
				a2d2 = true;
				//label7->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2e2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "a"))))
			{
				a2e2 = true;
				//label8->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2f2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "a"))))
			{
				a2f2 = true;
				//label9->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2g2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "a"))))
			{
				a2g2 = true;
				//label10->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex B
			if ((b2c2 == false) && (!cycle) && (((KruskalTemp->source == "c") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "c"))))
			{
				b2c2 = true;
				//label11->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "d"))))
			{
				b2d2 = true;
				//label12->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "e"))))
			{
				b2e2 = true;
				//label13->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "f"))))
			{
				b2f2 = true;
				//label14->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "g"))))
			{
				b2g2 = true;
				//label15->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex C
			if ((c2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "d"))))
			{
				c2d2 = true;
				//label16->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((c2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "e"))))
			{
				c2e2 = true;
				//label17->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((c2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "f"))))
			{
				c2f2 = true;
				//label18->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((c2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "g"))))
			{
				c2g2 = true;
				//label19->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex D
			if ((d2e2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "d"))))
			{
				d2e2 = true;
				//label20->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((d2f2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "d"))))
			{
				d2f2 = true;
				//label21->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((d2g2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "d"))))
			{
				d2g2 = true;
				//label22->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex E
			if ((e2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "f"))))
			{
				e2f2 = true;
				//label23->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((e2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "g"))))
			{
				e2g2 = true;
				//label24->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edge to and from Vertex f
			if ((f2g2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "f"))))
			{
				f2g2 = true;
				//label25->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
		}
		else if(KruskalStep == 3) {
			label29->Text += "not used"; KruskalStep++; KruskalTemp = KruskalTemp->next; return;
		}
		//KruskalTemp = KruskalTemp->next;
	}
	//cycle = kruskalgraph->KruskalsTree(KruskalTemp->source, KruskalTemp->destination);
	//*************************************************************************************************************************************
	//*************************************************************************************************************************************

	if (KruskalTemp != NULL)
	{
		if (!cycle && (KruskalStep == 4))
		{
			MinimumGraph->AddEdge(KruskalTemp->source, KruskalTemp->destination, KruskalTemp->weight);
			label30->Text += "Used";
			//KruskalStep++;
			if ((a2b2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "a"))))
			{
				a2b2 = true;
				//label5->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2c2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "a"))))
			{
				a2c2 = true;
				//label6->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2d2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "d")) || ((KruskalTemp->source == "d") && (KruskalTemp->destination == "a"))))
			{
				a2d2 = true;
				//label7->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2e2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "a"))))
			{
				a2e2 = true;
				//label8->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2f2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "a"))))
			{
				a2f2 = true;
				//label9->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2g2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "a"))))
			{
				a2g2 = true;
				//label10->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex B
			if ((b2c2 == false) && (!cycle) && (((KruskalTemp->source == "c") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "c"))))
			{
				b2c2 = true;
				//label11->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "d"))))
			{
				b2d2 = true;
				//label12->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "e"))))
			{
				b2e2 = true;
				//label13->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "f"))))
			{
				b2f2 = true;
				//label14->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "g"))))
			{
				b2g2 = true;
				//label15->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex C
			if ((c2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "d"))))
			{
				c2d2 = true;
				//label16->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((c2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "e"))))
			{
				c2e2 = true;
				//label17->Text = textBox3->Text;
				this->Invalidate();

				return;
			}
			if ((c2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "f"))))
			{
				c2f2 = true;
				//label18->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((c2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "g"))))
			{
				c2g2 = true;
				//label19->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex D
			if ((d2e2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "d"))))
			{
				d2e2 = true;
				//label20->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((d2f2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "d"))))
			{
				d2f2 = true;
				//label21->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((d2g2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "d"))))
			{
				d2g2 = true;
				//label22->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex E
			if ((e2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "f"))))
			{
				e2f2 = true;
				//label23->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((e2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "g"))))
			{
				e2g2 = true;
				//label24->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edge to and from Vertex f
			if ((f2g2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "f"))))
			{
				f2g2 = true;
				//label25->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
		}
		else if(KruskalStep == 4) {
			label30->Text += "not used"; KruskalStep++; KruskalTemp = KruskalTemp->next; return;
		}
		//KruskalTemp = KruskalTemp->next;
	}
	//cycle = kruskalgraph->KruskalsTree(KruskalTemp->source, KruskalTemp->destination);
	//*************************************************************************************************************************************
	//*************************************************************************************************************************************

	if (KruskalTemp != NULL)
	{
		if (!cycle && (KruskalStep == 5))
		{
			MinimumGraph->AddEdge(KruskalTemp->source, KruskalTemp->destination, KruskalTemp->weight);
			label31->Text += "Used";
			//KruskalStep++;
			if ((a2b2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "a"))))
			{
				a2b2 = true;
				//label5->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2c2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "a"))))
			{
				a2c2 = true;
				//label6->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2d2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "d")) || ((KruskalTemp->source == "d") && (KruskalTemp->destination == "a"))))
			{
				a2d2 = true;
				//label7->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2e2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "a"))))
			{
				a2e2 = true;
				//label8->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2f2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "a"))))
			{
				a2f2 = true;
				//label9->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2g2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "a"))))
			{
				a2g2 = true;
				//label10->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex B
			if ((b2c2 == false) && (!cycle) && (((KruskalTemp->source == "c") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "c"))))
			{
				b2c2 = true;
				//label11->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "d"))))
			{
				b2d2 = true;
				//label12->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "e"))))
			{
				b2e2 = true;
				//label13->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "f"))))
			{
				b2f2 = true;
				//label14->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "g"))))
			{
				b2g2 = true;
				//label15->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex C
			if ((c2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "d"))))
			{
				c2d2 = true;
				//label16->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((c2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "e"))))
			{
				c2e2 = true;
				//label17->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((c2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "f"))))
			{
				c2f2 = true;
				//label18->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((c2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "g"))))
			{
				c2g2 = true;
				//label19->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex D
			if ((d2e2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "d"))))
			{
				d2e2 = true;
				//label20->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((d2f2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "d"))))
			{
				d2f2 = true;
				//label21->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((d2g2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "d"))))
			{
				d2g2 = true;
				//label22->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex E
			if ((e2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "f"))))
			{
				e2f2 = true;
				//label23->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((e2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "g"))))
			{
				e2g2 = true;
				//label24->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edge to and from Vertex f
			if ((f2g2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "f"))))
			{
				f2g2 = true;
				//label25->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
		}
		else if(KruskalStep == 5) {
			label31->Text += "not used"; KruskalStep++; KruskalTemp = KruskalTemp->next; return;
		}
		//KruskalTemp = KruskalTemp->next;
	}
	//cycle = kruskalgraph->KruskalsTree(KruskalTemp->source, KruskalTemp->destination);
	//*************************************************************************************************************************************
	//*************************************************************************************************************************************

	if (KruskalTemp != NULL)
	{
		if (!cycle && (KruskalStep == 6))
		{
			MinimumGraph->AddEdge(KruskalTemp->source, KruskalTemp->destination, KruskalTemp->weight);
			label32->Text += "Used";
			//KruskalStep++;
			if ((a2b2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "a"))))
			{
				a2b2 = true;
				//label5->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2c2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "a"))))
			{
				a2c2 = true;
				//label6->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2d2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "d")) || ((KruskalTemp->source == "d") && (KruskalTemp->destination == "a"))))
			{
				a2d2 = true;
				//label7->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2e2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "a"))))
			{
				a2e2 = true;
				//label8->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2f2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "a"))))
			{
				a2f2 = true;
				//label9->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2g2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "a"))))
			{
				a2g2 = true;
				//label10->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex B
			if ((b2c2 == false) && (!cycle) && (((KruskalTemp->source == "c") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "c"))))
			{
				b2c2 = true;
				//label11->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "d"))))
			{
				b2d2 = true;
				//label12->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "e"))))
			{
				b2e2 = true;
				//label13->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "f"))))
			{
				b2f2 = true;
				//label14->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "g"))))
			{
				b2g2 = true;
				//label15->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex C
			if ((c2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "d"))))
			{
				c2d2 = true;
				//label16->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((c2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "e"))))
			{
				c2e2 = true;
				//label17->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((c2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "f"))))
			{
				c2f2 = true;
				//label18->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((c2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "g"))))
			{
				c2g2 = true;
				//label19->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex D
			if ((d2e2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "d"))))
			{
				d2e2 = true;
				//label20->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((d2f2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "d"))))
			{
				d2f2 = true;
				//label21->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((d2g2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "d"))))
			{
				d2g2 = true;
				//label22->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex E
			if ((e2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "f"))))
			{
				e2f2 = true;
				//label23->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((e2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "g"))))
			{
				e2g2 = true;
				//label24->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edge to and from Vertex f
			if ((f2g2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "f"))))
			{
				f2g2 = true;
				//label25->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
		}
		else if(KruskalStep == 6) {
			label32->Text += "not used"; KruskalStep++; KruskalTemp = KruskalTemp->next; return;
		}
		//KruskalTemp = KruskalTemp->next;
	}
	//cycle = kruskalgraph->KruskalsTree(KruskalTemp->source, KruskalTemp->destination);
	//*************************************************************************************************************************************
	//*************************************************************************************************************************************

	if (KruskalTemp != NULL)
	{
		if (!cycle && (KruskalStep == 7))
		{
			MinimumGraph->AddEdge(KruskalTemp->source, KruskalTemp->destination, KruskalTemp->weight);
			label33->Text += "Used";
			//KruskalStep++;
			if ((a2b2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "a"))))
			{
				a2b2 = true;
				//label5->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2c2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "a"))))
			{
				a2c2 = true;
				//label6->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2d2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "d")) || ((KruskalTemp->source == "d") && (KruskalTemp->destination == "a"))))
			{
				a2d2 = true;
				//label7->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2e2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "a"))))
			{
				a2e2 = true;
				//label8->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2f2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "a"))))
			{
				a2f2 = true;
				//label9->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2g2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "a"))))
			{
				a2g2 = true;
				//label10->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex B
			if ((b2c2 == false) && (!cycle) && (((KruskalTemp->source == "c") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "c"))))
			{
				b2c2 = true;
				//label11->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "d"))))
			{
				b2d2 = true;
				//label12->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "e"))))
			{
				b2e2 = true;
				//label13->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "f"))))
			{
				b2f2 = true;
				//label14->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "g"))))
			{
				b2g2 = true;
				//label15->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex C
			if ((c2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "d"))))
			{
				c2d2 = true;
				//label16->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((c2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "e"))))
			{
				c2e2 = true;
				//label17->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((c2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "f"))))
			{
				c2f2 = true;
				//label18->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((c2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "g"))))
			{
				c2g2 = true;
				//label19->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex D
			if ((d2e2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "d"))))
			{
				d2e2 = true;
				//label20->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((d2f2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "d"))))
			{
				d2f2 = true;
				//label21->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((d2g2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "d"))))
			{
				d2g2 = true;
				//label22->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex E
			if ((e2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "f"))))
			{
				e2f2 = true;
				//label23->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((e2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "g"))))
			{
				e2g2 = true;
				//label24->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edge to and from Vertex f
			if ((f2g2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "f"))))
			{
				f2g2 = true;
				//label25->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
		}
		else if(KruskalStep == 7) {
			label33->Text += "not used"; KruskalStep++; KruskalTemp = KruskalTemp->next; return;
		}
		//KruskalTemp = KruskalTemp->next;
	}
	//cycle = kruskalgraph->KruskalsTree(KruskalTemp->source, KruskalTemp->destination);
	//*************************************************************************************************************************************
	//*************************************************************************************************************************************

	if (KruskalTemp != NULL)
	{
		if (!cycle && (KruskalStep == 8))
		{
			MinimumGraph->AddEdge(KruskalTemp->source, KruskalTemp->destination, KruskalTemp->weight);
			label34->Text += "Used";
			//KruskalStep++;
			if ((a2b2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "a"))))
			{
				a2b2 = true;
				//label5->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2c2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "a"))))
			{
				a2c2 = true;
				//label6->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2d2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "d")) || ((KruskalTemp->source == "d") && (KruskalTemp->destination == "a"))))
			{
				a2d2 = true;
				//label7->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2e2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "a"))))
			{
				a2e2 = true;
				//label8->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2f2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "a"))))
			{
				a2f2 = true;
				//label9->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2g2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "a"))))
			{
				a2g2 = true;
				//label10->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex B
			if ((b2c2 == false) && (!cycle) && (((KruskalTemp->source == "c") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "c"))))
			{
				b2c2 = true;
				//label11->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "d"))))
			{
				b2d2 = true;
				//label12->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "e"))))
			{
				b2e2 = true;
				//label13->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "f"))))
			{
				b2f2 = true;
				//label14->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "g"))))
			{
				b2g2 = true;
				//label15->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex C
			if ((c2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "d"))))
			{
				c2d2 = true;
				//label16->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((c2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "e"))))
			{
				c2e2 = true;
				//label17->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((c2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "f"))))
			{
				c2f2 = true;
				//label18->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((c2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "g"))))
			{
				c2g2 = true;
				//label19->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex D
			if ((d2e2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "d"))))
			{
				d2e2 = true;
				//label20->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((d2f2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "d"))))
			{
				d2f2 = true;
				//label21->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((d2g2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "d"))))
			{
				d2g2 = true;
				//label22->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex E
			if ((e2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "f"))))
			{
				e2f2 = true;
				//label23->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((e2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "g"))))
			{
				e2g2 = true;
				//label24->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edge to and from Vertex f
			if ((f2g2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "f"))))
			{
				f2g2 = true;
				//label25->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
		}
		else if(KruskalStep == 8) {
			label34->Text += "not used"; KruskalStep++; KruskalTemp = KruskalTemp->next; return;
		}
		//KruskalTemp = KruskalTemp->next;
	}
	//cycle = kruskalgraph->KruskalsTree(KruskalTemp->source, KruskalTemp->destination);
	//*************************************************************************************************************************************
	//*************************************************************************************************************************************

	if (KruskalTemp != NULL)
	{
		if (!cycle && (KruskalStep == 9))
		{
			MinimumGraph->AddEdge(KruskalTemp->source, KruskalTemp->destination, KruskalTemp->weight);
			label35->Text += "Used";
			//KruskalStep++;
			if ((a2b2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "a"))))
			{
				a2b2 = true;
				//label5->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2c2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "a"))))
			{
				a2c2 = true;
				//label6->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2d2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "d")) || ((KruskalTemp->source == "d") && (KruskalTemp->destination == "a"))))
			{
				a2d2 = true;
				//label7->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2e2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "a"))))
			{
				a2e2 = true;
				//label8->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2f2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "a"))))
			{
				a2f2 = true;
				//label9->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2g2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "a"))))
			{
				a2g2 = true;
				//label10->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex B
			if ((b2c2 == false) && (!cycle) && (((KruskalTemp->source == "c") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "c"))))
			{
				b2c2 = true;
				//label11->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "d"))))
			{
				b2d2 = true;
				//label12->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "e"))))
			{
				b2e2 = true;
				//label13->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "f"))))
			{
				b2f2 = true;
				//label14->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((b2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "g"))))
			{
				b2g2 = true;
				//label15->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex C
			if ((c2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "d"))))
			{
				c2d2 = true;
				//label16->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((c2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "e"))))
			{
				c2e2 = true;
				//label17->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((c2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "f"))))
			{
				c2f2 = true;
				//label18->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((c2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "g"))))
			{
				c2g2 = true;
				//label19->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex D
			if ((d2e2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "d"))))
			{
				d2e2 = true;
				//label20->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((d2f2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "d"))))
			{
				d2f2 = true;
				//label21->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((d2g2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "d"))))
			{
				d2g2 = true;
				//label22->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edges to and from Vertex E
			if ((e2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "f"))))
			{
				e2f2 = true;
				//label23->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((e2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "g"))))
			{
				e2g2 = true;
				//label24->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			//Edge to and from Vertex f
			if ((f2g2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "f"))))
			{
				f2g2 = true;
				//label25->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
		}
		else if(KruskalStep == 9) {
			label35->Text += "not used"; KruskalStep++; KruskalTemp = KruskalTemp->next; return;
		}
		//KruskalTemp = KruskalTemp->next;
	}
	//cycle = kruskalgraph->KruskalsTree(KruskalTemp->source, KruskalTemp->destination);
	//*************************************************************************************************************************************
	//*************************************************************************************************************************************

	if (KruskalTemp != NULL)
	{
		if (!cycle && (KruskalStep == 10))
		{
			MinimumGraph->AddEdge(KruskalTemp->source, KruskalTemp->destination, KruskalTemp->weight);
			label36->Text += "Used";
			//KruskalStep++;
			if ((a2b2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "a"))))
			{
				a2b2 = true;
				//label5->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2c2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "a"))))
			{
				a2c2 = true;
				//label6->Text = textBox3->Text;
				this->Invalidate();
				KruskalTemp = KruskalTemp->next;
				return;
			}
			if ((a2d2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "d")) || ((KruskalTemp->source == "d") && (KruskalTemp->destination == "a"))))
			{
				a2d2 = true;
				//label7->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2e2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "a"))))
			{
				a2e2 = true;
				//label8->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2f2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "a"))))
			{
				a2f2 = true;
				//label9->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2g2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "a"))))
			{
				a2g2 = true;
				//label10->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex B
			if ((b2c2 == false) && (!cycle) && (((KruskalTemp->source == "c") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "c"))))
			{
				b2c2 = true;
				//label11->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "d"))))
			{
				b2d2 = true;
				//label12->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "e"))))
			{
				b2e2 = true;
				//label13->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "f"))))
			{
				b2f2 = true;
				//label14->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "g"))))
			{
				b2g2 = true;
				//label15->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex C
			if ((c2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "d"))))
			{
				c2d2 = true;
				//label16->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "e"))))
			{
				c2e2 = true;
				//label17->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "f"))))
			{
				c2f2 = true;
				//label18->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "g"))))
			{
				c2g2 = true;
				//label19->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex D
			if ((d2e2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "d"))))
			{
				d2e2 = true;
				//label20->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((d2f2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "d"))))
			{
				d2f2 = true;
				//label21->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((d2g2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "d"))))
			{
				d2g2 = true;
				//label22->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex E
			if ((e2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "f"))))
			{
				e2f2 = true;
				//label23->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((e2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "g"))))
			{
				e2g2 = true;
				//label24->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edge to and from Vertex f
			if ((f2g2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "f"))))
			{
				f2g2 = true;
				//label25->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
		}
		else if(KruskalStep == 10) {
			label36->Text += "not used"; KruskalStep++; KruskalTemp = KruskalTemp->next; return;
		}
		// 
	}
	//cycle = kruskalgraph->KruskalsTree(KruskalTemp->source, KruskalTemp->destination);
	//*************************************************************************************************************************************
	//*************************************************************************************************************************************

	if (KruskalTemp != NULL)
	{
		if (!cycle && (KruskalStep == 11))
		{
			MinimumGraph->AddEdge(KruskalTemp->source, KruskalTemp->destination, KruskalTemp->weight);
			label37->Text += "Used";  
			//KruskalStep++;
		}
		if ((a2b2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "a"))))
		{
			a2b2 = true;
			//label5->Text = textBox3->Text;
			this->Invalidate();

			KruskalTemp = KruskalTemp->next;return;
		}
		if ((a2c2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "a"))))
		{
			a2c2 = true;
			//label6->Text = textBox3->Text;
			this->Invalidate();

			KruskalTemp = KruskalTemp->next;return;
		}
		if ((a2d2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "d")) || ((KruskalTemp->source == "d") && (KruskalTemp->destination == "a"))))
		{
			a2d2 = true;
			//label7->Text = textBox3->Text;
			this->Invalidate();

			KruskalTemp = KruskalTemp->next;return;
		}
		if ((a2e2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "a"))))
		{
			a2e2 = true;
			//label8->Text = textBox3->Text;
			this->Invalidate();

			KruskalTemp = KruskalTemp->next;return;
		}
		if ((a2f2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "a"))))
		{
			a2f2 = true;
			//label9->Text = textBox3->Text;
			this->Invalidate();

			KruskalTemp = KruskalTemp->next;return;
		}
		if ((a2g2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "a"))))
		{
			a2g2 = true;
			//label10->Text = textBox3->Text;
			this->Invalidate();

			KruskalTemp = KruskalTemp->next;return;
		}
		//Edges to and from Vertex B
		if ((b2c2 == false) && (!cycle) && (((KruskalTemp->source == "c") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "c"))))
		{
			b2c2 = true;
			//label11->Text = textBox3->Text;
			this->Invalidate();

			KruskalTemp = KruskalTemp->next;return;
		}
		if ((b2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "d"))))
		{
			b2d2 = true;
			//label12->Text = textBox3->Text;
			this->Invalidate();

			KruskalTemp = KruskalTemp->next;return;
		}
		if ((b2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "e"))))
		{
			b2e2 = true;
			//label13->Text = textBox3->Text;
			this->Invalidate();

			KruskalTemp = KruskalTemp->next;return;
		}
		if ((b2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "f"))))
		{
			b2f2 = true;
			//label14->Text = textBox3->Text;
			this->Invalidate();

			KruskalTemp = KruskalTemp->next;return;
		}
		if ((b2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "g"))))
		{
			b2g2 = true;
			//label15->Text = textBox3->Text;
			this->Invalidate();

			KruskalTemp = KruskalTemp->next;return;
		}
		//Edges to and from Vertex C
		if ((c2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "d"))))
		{
			c2d2 = true;
			//label16->Text = textBox3->Text;
			this->Invalidate();

			KruskalTemp = KruskalTemp->next;return;
		}
		if ((c2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "e"))))
		{
			c2e2 = true;
			//label17->Text = textBox3->Text;
			this->Invalidate();

			KruskalTemp = KruskalTemp->next;return;
		}
		if ((c2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "f"))))
		{
			c2f2 = true;
			//label18->Text = textBox3->Text;
			this->Invalidate();

			KruskalTemp = KruskalTemp->next;return;
		}
		if ((c2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "g"))))
		{
			c2g2 = true;
			//label19->Text = textBox3->Text;
			this->Invalidate();

			KruskalTemp = KruskalTemp->next;return;
		}
		//Edges to and from Vertex D
		if ((d2e2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "d"))))
		{
			d2e2 = true;
			//label20->Text = textBox3->Text;
			this->Invalidate();

			KruskalTemp = KruskalTemp->next;return;
		}
		if ((d2f2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "d"))))
		{
			d2f2 = true;
			//label21->Text = textBox3->Text;
			this->Invalidate();

			KruskalTemp = KruskalTemp->next;return;
		}
		if ((d2g2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "d"))))
		{
			d2g2 = true;
			//label22->Text = textBox3->Text;
			this->Invalidate();

			KruskalTemp = KruskalTemp->next;return;
		}
		//Edges to and from Vertex E
		if ((e2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "f"))))
		{
			e2f2 = true;
			//label23->Text = textBox3->Text;
			this->Invalidate();

			KruskalTemp = KruskalTemp->next;return;
		}
		if ((e2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "g"))))
		{
			e2g2 = true;
			//label24->Text = textBox3->Text;
			this->Invalidate();

			KruskalTemp = KruskalTemp->next;return;
		}
		//Edge to and from Vertex f
		if ((f2g2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "f"))))
		{
			f2g2 = true;
			//label25->Text = textBox3->Text;
			this->Invalidate();

			KruskalTemp = KruskalTemp->next;return;
		}
		else if(KruskalStep == 11) {
			label37->Text += "not used"; KruskalStep++; KruskalTemp = KruskalTemp->next; return;
		}
		// 
	}
	//cycle = kruskalgraph->KruskalsTree(KruskalTemp->source, KruskalTemp->destination);
	//*************************************************************************************************************************************
	//*************************************************************************************************************************************

	if (KruskalTemp != NULL)
	{
		if (!cycle && (KruskalStep == 12))
		{
			MinimumGraph->AddEdge(KruskalTemp->source, KruskalTemp->destination, KruskalTemp->weight);
			label38->Text += "Used";  
			//KruskalStep++;
			if ((a2b2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "a"))))
			{
				a2b2 = true;
				//label5->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2c2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "a"))))
			{
				a2c2 = true;
				//label6->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2d2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "d")) || ((KruskalTemp->source == "d") && (KruskalTemp->destination == "a"))))
			{
				a2d2 = true;
				//label7->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2e2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "a"))))
			{
				a2e2 = true;
				//label8->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2f2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "a"))))
			{
				a2f2 = true;
				//label9->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2g2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "a"))))
			{
				a2g2 = true;
				//label10->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex B
			if ((b2c2 == false) && (!cycle) && (((KruskalTemp->source == "c") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "c"))))
			{
				b2c2 = true;
				//label11->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "d"))))
			{
				b2d2 = true;
				//label12->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "e"))))
			{
				b2e2 = true;
				//label13->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "f"))))
			{
				b2f2 = true;
				//label14->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "g"))))
			{
				b2g2 = true;
				//label15->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex C
			if ((c2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "d"))))
			{
				c2d2 = true;
				//label16->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "e"))))
			{
				c2e2 = true;
				//label17->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "f"))))
			{
				c2f2 = true;
				//label18->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "g"))))
			{
				c2g2 = true;
				//label19->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex D
			if ((d2e2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "d"))))
			{
				d2e2 = true;
				//label20->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((d2f2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "d"))))
			{
				d2f2 = true;
				//label21->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((d2g2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "d"))))
			{
				d2g2 = true;
				//label22->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex E
			if ((e2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "f"))))
			{
				e2f2 = true;
				//label23->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((e2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "g"))))
			{
				e2g2 = true;
				//label24->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edge to and from Vertex f
			if ((f2g2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "f"))))
			{
				f2g2 = true;
				//label25->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
		}
		else if(KruskalStep == 12) {
			label38->Text += "not used"; KruskalStep++; KruskalTemp = KruskalTemp->next; return;
		}
		// 
	}
	//cycle = kruskalgraph->KruskalsTree(KruskalTemp->source, KruskalTemp->destination);
	//*************************************************************************************************************************************
	//*************************************************************************************************************************************

	if (KruskalTemp != NULL)
	{
		if (!cycle && (KruskalStep == 13))
		{
			MinimumGraph->AddEdge(KruskalTemp->source, KruskalTemp->destination, KruskalTemp->weight);
			label39->Text += "Used";  
			//KruskalStep++;
			if ((a2b2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "a"))))
			{
				a2b2 = true;
				//label5->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2c2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "a"))))
			{
				a2c2 = true;
				//label6->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2d2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "d")) || ((KruskalTemp->source == "d") && (KruskalTemp->destination == "a"))))
			{
				a2d2 = true;
				//label7->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2e2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "a"))))
			{
				a2e2 = true;
				//label8->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2f2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "a"))))
			{
				a2f2 = true;
				//label9->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2g2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "a"))))
			{
				a2g2 = true;
				//label10->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex B
			if ((b2c2 == false) && (!cycle) && (((KruskalTemp->source == "c") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "c"))))
			{
				b2c2 = true;
				//label11->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "d"))))
			{
				b2d2 = true;
				//label12->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "e"))))
			{
				b2e2 = true;
				//label13->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "f"))))
			{
				b2f2 = true;
				//label14->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "g"))))
			{
				b2g2 = true;
				//label15->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex C
			if ((c2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "d"))))
			{
				c2d2 = true;
				//label16->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "e"))))
			{
				c2e2 = true;
				//label17->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "f"))))
			{
				c2f2 = true;
				//label18->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "g"))))
			{
				c2g2 = true;
				//label19->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex D
			if ((d2e2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "d"))))
			{
				d2e2 = true;
				//label20->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((d2f2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "d"))))
			{
				d2f2 = true;
				//label21->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((d2g2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "d"))))
			{
				d2g2 = true;
				//label22->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex E
			if ((e2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "f"))))
			{
				e2f2 = true;
				//label23->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((e2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "g"))))
			{
				e2g2 = true;
				//label24->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edge to and from Vertex f
			if ((f2g2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "f"))))
			{
				f2g2 = true;
				//label25->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
		}
		else if(KruskalStep == 13) {
			label39->Text += "not used"; KruskalStep++; KruskalTemp = KruskalTemp->next; return;
		}
		// 
	}
	//cycle = kruskalgraph->KruskalsTree(KruskalTemp->source, KruskalTemp->destination);
	//*************************************************************************************************************************************
	//*************************************************************************************************************************************

	if (KruskalTemp != NULL)
	{
		if (!cycle && (KruskalStep == 14))
		{
			MinimumGraph->AddEdge(KruskalTemp->source, KruskalTemp->destination, KruskalTemp->weight);
			label40->Text += "Used";  
			//KruskalStep++;
			if ((a2b2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "a"))))
			{
				a2b2 = true;
				//label5->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2c2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "a"))))
			{
				a2c2 = true;
				//label6->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2d2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "d")) || ((KruskalTemp->source == "d") && (KruskalTemp->destination == "a"))))
			{
				a2d2 = true;
				//label7->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2e2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "a"))))
			{
				a2e2 = true;
				//label8->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2f2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "a"))))
			{
				a2f2 = true;
				//label9->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2g2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "a"))))
			{
				a2g2 = true;
				//label10->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex B
			if ((b2c2 == false) && (!cycle) && (((KruskalTemp->source == "c") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "c"))))
			{
				b2c2 = true;
				//label11->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "d"))))
			{
				b2d2 = true;
				//label12->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "e"))))
			{
				b2e2 = true;
				//label13->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "f"))))
			{
				b2f2 = true;
				//label14->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "g"))))
			{
				b2g2 = true;
				//label15->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex C
			if ((c2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "d"))))
			{
				c2d2 = true;
				//label16->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "e"))))
			{
				c2e2 = true;
				//label17->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "f"))))
			{
				c2f2 = true;
				//label18->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "g"))))
			{
				c2g2 = true;
				//label19->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex D
			if ((d2e2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "d"))))
			{
				d2e2 = true;
				//label20->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((d2f2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "d"))))
			{
				d2f2 = true;
				//label21->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((d2g2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "d"))))
			{
				d2g2 = true;
				//label22->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex E
			if ((e2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "f"))))
			{
				e2f2 = true;
				//label23->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((e2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "g"))))
			{
				e2g2 = true;
				//label24->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edge to and from Vertex f
			if ((f2g2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "f"))))
			{
				f2g2 = true;
				//label25->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
		}
		else if(KruskalStep == 14) {
			label40->Text += "not used"; KruskalStep++; KruskalTemp = KruskalTemp->next; return;
		}
		// 
	}
	//cycle = kruskalgraph->KruskalsTree(KruskalTemp->source, KruskalTemp->destination);
	//*************************************************************************************************************************************
	//*************************************************************************************************************************************

	if (KruskalTemp != NULL)
	{
		if (!cycle && (KruskalStep == 15))
		{
			MinimumGraph->AddEdge(KruskalTemp->source, KruskalTemp->destination, KruskalTemp->weight);
			label41->Text += "Used";  
			//KruskalStep++;
			if ((a2b2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "a"))))
			{
				a2b2 = true;
				//label5->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2c2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "a"))))
			{
				a2c2 = true;
				//label6->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2d2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "d")) || ((KruskalTemp->source == "d") && (KruskalTemp->destination == "a"))))
			{
				a2d2 = true;
				//label7->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2e2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "a"))))
			{
				a2e2 = true;
				//label8->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2f2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "a"))))
			{
				a2f2 = true;
				//label9->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2g2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "a"))))
			{
				a2g2 = true;
				//label10->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex B
			if ((b2c2 == false) && (!cycle) && (((KruskalTemp->source == "c") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "c"))))
			{
				b2c2 = true;
				//label11->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "d"))))
			{
				b2d2 = true;
				//label12->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "e"))))
			{
				b2e2 = true;
				//label13->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "f"))))
			{
				b2f2 = true;
				//label14->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "g"))))
			{
				b2g2 = true;
				//label15->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex C
			if ((c2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "d"))))
			{
				c2d2 = true;
				//label16->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "e"))))
			{
				c2e2 = true;
				//label17->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "f"))))
			{
				c2f2 = true;
				//label18->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "g"))))
			{
				c2g2 = true;
				//label19->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex D
			if ((d2e2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "d"))))
			{
				d2e2 = true;
				//label20->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((d2f2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "d"))))
			{
				d2f2 = true;
				//label21->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((d2g2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "d"))))
			{
				d2g2 = true;
				//label22->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex E
			if ((e2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "f"))))
			{
				e2f2 = true;
				//label23->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((e2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "g"))))
			{
				e2g2 = true;
				//label24->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edge to and from Vertex f
			if ((f2g2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "f"))))
			{
				f2g2 = true;
				//label25->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
		}
		else if(KruskalStep == 15) {
			label41->Text += "not used"; KruskalStep++; KruskalTemp = KruskalTemp->next; return;
		}
		// 
	}
	//cycle = kruskalgraph->KruskalsTree(KruskalTemp->source, KruskalTemp->destination);
	//*************************************************************************************************************************************
	//*************************************************************************************************************************************

	if (KruskalTemp != NULL)
	{
		if (!cycle && (KruskalStep == 16))
		{
			MinimumGraph->AddEdge(KruskalTemp->source, KruskalTemp->destination, KruskalTemp->weight);
			label42->Text += "Used";  
			//KruskalStep++;
			if ((a2b2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "a"))))
			{
				a2b2 = true;
				//label5->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2c2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "a"))))
			{
				a2c2 = true;
				//label6->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2d2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "d")) || ((KruskalTemp->source == "d") && (KruskalTemp->destination == "a"))))
			{
				a2d2 = true;
				//label7->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2e2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "a"))))
			{
				a2e2 = true;
				//label8->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2f2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "a"))))
			{
				a2f2 = true;
				//label9->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2g2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "a"))))
			{
				a2g2 = true;
				//label10->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex B
			if ((b2c2 == false) && (!cycle) && (((KruskalTemp->source == "c") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "c"))))
			{
				b2c2 = true;
				//label11->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "d"))))
			{
				b2d2 = true;
				//label12->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "e"))))
			{
				b2e2 = true;
				//label13->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "f"))))
			{
				b2f2 = true;
				//label14->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "g"))))
			{
				b2g2 = true;
				//label15->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex C
			if ((c2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "d"))))
			{
				c2d2 = true;
				//label16->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "e"))))
			{
				c2e2 = true;
				//label17->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "f"))))
			{
				c2f2 = true;
				//label18->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "g"))))
			{
				c2g2 = true;
				//label19->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex D
			if ((d2e2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "d"))))
			{
				d2e2 = true;
				//label20->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((d2f2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "d"))))
			{
				d2f2 = true;
				//label21->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((d2g2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "d"))))
			{
				d2g2 = true;
				//label22->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex E
			if ((e2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "f"))))
			{
				e2f2 = true;
				//label23->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((e2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "g"))))
			{
				e2g2 = true;
				//label24->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edge to and from Vertex f
			if ((f2g2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "f"))))
			{
				f2g2 = true;
				//label25->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
		}
		else if(KruskalStep == 16) {
			label42->Text += "not used"; KruskalStep++; KruskalTemp = KruskalTemp->next; return;
		}
		// 
	}
	//cycle = kruskalgraph->KruskalsTree(KruskalTemp->source, KruskalTemp->destination);
	//*************************************************************************************************************************************
	//*************************************************************************************************************************************

	if (KruskalTemp != NULL)
	{
		if (!cycle && (KruskalStep == 17))
		{
			MinimumGraph->AddEdge(KruskalTemp->source, KruskalTemp->destination, KruskalTemp->weight);
			label43->Text += "Used";  
			//KruskalStep++;
			if ((a2b2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "a"))))
			{
				a2b2 = true;
				//label5->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2c2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "a"))))
			{
				a2c2 = true;
				//label6->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2d2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "d")) || ((KruskalTemp->source == "d") && (KruskalTemp->destination == "a"))))
			{
				a2d2 = true;
				//label7->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2e2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "a"))))
			{
				a2e2 = true;
				//label8->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2f2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "a"))))
			{
				a2f2 = true;
				//label9->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2g2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "a"))))
			{
				a2g2 = true;
				//label10->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex B
			if ((b2c2 == false) && (!cycle) && (((KruskalTemp->source == "c") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "c"))))
			{
				b2c2 = true;
				//label11->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "d"))))
			{
				b2d2 = true;
				//label12->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "e"))))
			{
				b2e2 = true;
				//label13->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "f"))))
			{
				b2f2 = true;
				//label14->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "g"))))
			{
				b2g2 = true;
				//label15->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex C
			if ((c2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "d"))))
			{
				c2d2 = true;
				//label16->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "e"))))
			{
				c2e2 = true;
				//label17->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "f"))))
			{
				c2f2 = true;
				//label18->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "g"))))
			{
				c2g2 = true;
				//label19->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex D
			if ((d2e2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "d"))))
			{
				d2e2 = true;
				//label20->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((d2f2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "d"))))
			{
				d2f2 = true;
				//label21->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((d2g2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "d"))))
			{
				d2g2 = true;
				//label22->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex E
			if ((e2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "f"))))
			{
				e2f2 = true;
				//label23->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((e2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "g"))))
			{
				e2g2 = true;
				//label24->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edge to and from Vertex f
			if ((f2g2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "f"))))
			{
				f2g2 = true;
				//label25->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
		}
		else if(KruskalStep == 17) {
			label43->Text += "not used"; KruskalStep++; KruskalTemp = KruskalTemp->next; return;
		}
		// 
	}
	//cycle = kruskalgraph->KruskalsTree(KruskalTemp->source, KruskalTemp->destination);
	//*************************************************************************************************************************************
	//*************************************************************************************************************************************

	if (KruskalTemp != NULL)
	{
		if (!cycle && (KruskalStep == 18))
		{
			MinimumGraph->AddEdge(KruskalTemp->source, KruskalTemp->destination, KruskalTemp->weight);
			label44->Text += "Used";  
			//KruskalStep++;
			if ((a2b2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "a"))))
			{
				a2b2 = true;
				//label5->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2c2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "a"))))
			{
				a2c2 = true;
				//label6->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2d2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "d")) || ((KruskalTemp->source == "d") && (KruskalTemp->destination == "a"))))
			{
				a2d2 = true;
				//label7->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2e2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "a"))))
			{
				a2e2 = true;
				//label8->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2f2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "a"))))
			{
				a2f2 = true;
				//label9->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2g2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "a"))))
			{
				a2g2 = true;
				//label10->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex B
			if ((b2c2 == false) && (!cycle) && (((KruskalTemp->source == "c") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "c"))))
			{
				b2c2 = true;
				//label11->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "d"))))
			{
				b2d2 = true;
				//label12->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "e"))))
			{
				b2e2 = true;
				//label13->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "f"))))
			{
				b2f2 = true;
				//label14->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "g"))))
			{
				b2g2 = true;
				//label15->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex C
			if ((c2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "d"))))
			{
				c2d2 = true;
				//label16->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "e"))))
			{
				c2e2 = true;
				//label17->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "f"))))
			{
				c2f2 = true;
				//label18->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "g"))))
			{
				c2g2 = true;
				//label19->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex D
			if ((d2e2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "d"))))
			{
				d2e2 = true;
				//label20->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((d2f2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "d"))))
			{
				d2f2 = true;
				//label21->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((d2g2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "d"))))
			{
				d2g2 = true;
				//label22->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex E
			if ((e2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "f"))))
			{
				e2f2 = true;
				//label23->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((e2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "g"))))
			{
				e2g2 = true;
				//label24->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edge to and from Vertex f
			if ((f2g2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "f"))))
			{
				f2g2 = true;
				//label25->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
		}
		else if(KruskalStep == 18) {
			label44->Text += "not used"; KruskalStep++; KruskalTemp = KruskalTemp->next; return;
		}
		// 
	}
	//cycle = kruskalgraph->KruskalsTree(KruskalTemp->source, KruskalTemp->destination);
	//*************************************************************************************************************************************
	//*************************************************************************************************************************************

	if (KruskalTemp != NULL)
	{
		if (!cycle && (KruskalStep == 19))
		{
			MinimumGraph->AddEdge(KruskalTemp->source, KruskalTemp->destination, KruskalTemp->weight);
			label45->Text += "Used";  
			//KruskalStep++;
			if ((a2b2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "a"))))
			{
				a2b2 = true;
				//label5->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2c2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "a"))))
			{
				a2c2 = true;
				//label6->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2d2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "d")) || ((KruskalTemp->source == "d") && (KruskalTemp->destination == "a"))))
			{
				a2d2 = true;
				//label7->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2e2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "a"))))
			{
				a2e2 = true;
				//label8->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2f2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "a"))))
			{
				a2f2 = true;
				//label9->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2g2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "a"))))
			{
				a2g2 = true;
				//label10->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex B
			if ((b2c2 == false) && (!cycle) && (((KruskalTemp->source == "c") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "c"))))
			{
				b2c2 = true;
				//label11->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "d"))))
			{
				b2d2 = true;
				//label12->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "e"))))
			{
				b2e2 = true;
				//label13->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "f"))))
			{
				b2f2 = true;
				//label14->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "g"))))
			{
				b2g2 = true;
				//label15->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex C
			if ((c2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "d"))))
			{
				c2d2 = true;
				//label16->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "e"))))
			{
				c2e2 = true;
				//label17->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "f"))))
			{
				c2f2 = true;
				//label18->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "g"))))
			{
				c2g2 = true;
				//label19->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex D
			if ((d2e2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "d"))))
			{
				d2e2 = true;
				//label20->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((d2f2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "d"))))
			{
				d2f2 = true;
				//label21->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((d2g2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "d"))))
			{
				d2g2 = true;
				//label22->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex E
			if ((e2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "f"))))
			{
				e2f2 = true;
				//label23->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((e2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "g"))))
			{
				e2g2 = true;
				//label24->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edge to and from Vertex f
			if ((f2g2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "f"))))
			{
				f2g2 = true;
				//label25->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
		}
		else if(KruskalStep == 19) {
			label45->Text += "not used"; KruskalStep++; KruskalTemp = KruskalTemp->next; return;
		}
		// 
	}
	//cycle = kruskalgraph->KruskalsTree(KruskalTemp->source, KruskalTemp->destination);
	//*************************************************************************************************************************************
	//*************************************************************************************************************************************

	if (KruskalTemp != NULL)
	{
		if (!cycle && (KruskalStep == 20))
		{
			MinimumGraph->AddEdge(KruskalTemp->source, KruskalTemp->destination, KruskalTemp->weight);
			label46->Text += "Used";  
			//KruskalStep++;
			if ((a2b2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "a"))))
			{
				a2b2 = true;
				//label5->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2c2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "a"))))
			{
				a2c2 = true;
				//label6->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2d2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "d")) || ((KruskalTemp->source == "d") && (KruskalTemp->destination == "a"))))
			{
				a2d2 = true;
				//label7->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2e2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "a"))))
			{
				a2e2 = true;
				//label8->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2f2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "a"))))
			{
				a2f2 = true;
				//label9->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2g2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "a"))))
			{
				a2g2 = true;
				//label10->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex B
			if ((b2c2 == false) && (!cycle) && (((KruskalTemp->source == "c") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "c"))))
			{
				b2c2 = true;
				//label11->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "d"))))
			{
				b2d2 = true;
				//label12->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "e"))))
			{
				b2e2 = true;
				//label13->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "f"))))
			{
				b2f2 = true;
				//label14->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "g"))))
			{
				b2g2 = true;
				//label15->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex C
			if ((c2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "d"))))
			{
				c2d2 = true;
				//label16->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "e"))))
			{
				c2e2 = true;
				//label17->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "f"))))
			{
				c2f2 = true;
				//label18->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "g"))))
			{
				c2g2 = true;
				//label19->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex D
			if ((d2e2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "d"))))
			{
				d2e2 = true;
				//label20->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((d2f2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "d"))))
			{
				d2f2 = true;
				//label21->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((d2g2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "d"))))
			{
				d2g2 = true;
				//label22->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex E
			if ((e2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "f"))))
			{
				e2f2 = true;
				//label23->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((e2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "g"))))
			{
				e2g2 = true;
				//label24->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edge to and from Vertex f
			if ((f2g2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "f"))))
			{
				f2g2 = true;
				//label25->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
		}
		else if(KruskalStep == 20) {
			label46->Text += "not used"; KruskalStep++; KruskalTemp = KruskalTemp->next; return;
		}
		// 
	}
	//cycle = kruskalgraph->KruskalsTree(KruskalTemp->source, KruskalTemp->destination);
	//*************************************************************************************************************************************
	//*************************************************************************************************************************************

	if (KruskalTemp != NULL)
	{
		if (!cycle && (KruskalStep == 21))
		{
			MinimumGraph->AddEdge(KruskalTemp->source, KruskalTemp->destination, KruskalTemp->weight);
			label47->Text += "Used";  
			//KruskalStep++;
			if ((a2b2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "a"))))
			{
				a2b2 = true;
				//label5->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2c2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "a"))))
			{
				a2c2 = true;
				//label6->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2d2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "d")) || ((KruskalTemp->source == "d") && (KruskalTemp->destination == "a"))))
			{
				a2d2 = true;
				//label7->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2e2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "a"))))
			{
				a2e2 = true;
				//label8->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2f2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "a"))))
			{
				a2f2 = true;
				//label9->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((a2g2 == false) && (!cycle) && (((KruskalTemp->source == "a") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "a"))))
			{
				a2g2 = true;
				//label10->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex B
			if ((b2c2 == false) && (!cycle) && (((KruskalTemp->source == "c") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "c"))))
			{
				b2c2 = true;
				//label11->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "d"))))
			{
				b2d2 = true;
				//label12->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "e"))))
			{
				b2e2 = true;
				//label13->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "f"))))
			{
				b2f2 = true;
				//label14->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((b2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "b")) || ((KruskalTemp->source == "b") && (KruskalTemp->destination == "g"))))
			{
				b2g2 = true;
				//label15->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex C
			if ((c2d2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "d"))))
			{
				c2d2 = true;
				//label16->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2e2 == false) && (!cycle) && (((KruskalTemp->source == "e") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "e"))))
			{
				c2e2 = true;
				//label17->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "f"))))
			{
				c2f2 = true;
				//label18->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((c2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "c")) || ((KruskalTemp->source == "c") && (KruskalTemp->destination == "g"))))
			{
				c2g2 = true;
				//label19->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex D
			if ((d2e2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "d"))))
			{
				d2e2 = true;
				//label20->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((d2f2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "f")) || ((KruskalTemp->source == "f") && (KruskalTemp->destination == "d"))))
			{
				d2f2 = true;
				//label21->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((d2g2 == false) && (!cycle) && (((KruskalTemp->source == "d") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "d"))))
			{
				d2g2 = true;
				//label22->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edges to and from Vertex E
			if ((e2f2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "f"))))
			{
				e2f2 = true;
				//label23->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			if ((e2g2 == false) && (!cycle) && (((KruskalTemp->source == "g") && (KruskalTemp->destination == "e")) || ((KruskalTemp->source == "e") && (KruskalTemp->destination == "g"))))
			{
				e2g2 = true;
				//label24->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
			//Edge to and from Vertex f
			if ((f2g2 == false) && (!cycle) && (((KruskalTemp->source == "f") && (KruskalTemp->destination == "g")) || ((KruskalTemp->source == "g") && (KruskalTemp->destination == "f"))))
			{
				f2g2 = true;
				//label25->Text = textBox3->Text;
				this->Invalidate();

				KruskalTemp = KruskalTemp->next;return;
			}
		}
		else if(KruskalStep == 21) {
			label47->Text += "not used"; KruskalStep++; KruskalTemp = KruskalTemp->next; return;
			//KruskalStep--;
		}
		// 
	}
	if (cycle)
	{
		KruskalStep--;
	}
	KruskalTemp = KruskalTemp->next;
	//cycle = kruskalgraph->KruskalsTree(KruskalTemp->source, KruskalTemp->destination);
	//*************************************************************************************************************************************
	//*************************************************************************************************************************************

}
};



}
