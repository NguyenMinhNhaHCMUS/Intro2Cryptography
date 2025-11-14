# HƯỚNG DẪN CHUYỂN ĐỔI BÁO CÁO SANG .DOCX

## CÁCH 1: Sử dụng Pandoc (Khuyến nghị)

### Bước 1: Cài đặt Pandoc
```bash
# Trên macOS
brew install pandoc

# Trên Linux
sudo apt-get install pandoc

# Trên Windows
# Download từ: https://pandoc.org/installing.html
```

### Bước 2: Chuyển đổi sang .docx
```bash
cd /Users/levominhphuong/Documents/Intro2Crypto
pandoc BAO_CAO_SO_NGAU_NHIEN.md -o BAO_CAO_SO_NGAU_NHIEN.docx
```

### Bước 3: Mở file .docx
File `BAO_CAO_SO_NGAU_NHIEN.docx` sẽ được tạo trong thư mục hiện tại.

---

## CÁCH 2: Sử dụng Word Online (Không cần cài đặt)

### Bước 1: Mở file markdown
Mở file `BAO_CAO_SO_NGAU_NHIEN.md` bằng text editor.

### Bước 2: Copy nội dung
Copy toàn bộ nội dung vào clipboard.

### Bước 3: Paste vào Word Online
1. Mở https://office.live.com/start/Word.aspx
2. Tạo document mới
3. Paste nội dung vào
4. Format lại (tiêu đề, danh sách, code blocks)
5. Save as .docx

---

## CÁCH 3: Sử dụng Markdown Editor

### Bước 1: Mở file markdown
Mở file `BAO_CAO_SO_NGAU_NHIEN.md` bằng:
- Typora (macOS/Windows/Linux)
- Mark Text (macOS/Windows/Linux)
- VS Code với extension Markdown Preview

### Bước 2: Export sang .docx
1. Mở file trong editor
2. File > Export > Word (.docx)
3. Save file

---

## CÁCH 4: Copy vào Word và Format thủ công

### Bước 1: Mở file markdown
Mở file `BAO_CAO_SO_NGAU_NHIEN.md` bằng text editor.

### Bước 2: Copy nội dung
Copy từng phần hoặc toàn bộ nội dung.

### Bước 3: Paste vào Word
1. Mở Microsoft Word
2. Paste nội dung
3. Format lại:
   - Tiêu đề: Heading 1, Heading 2, Heading 3
   - Code blocks: Courier New font, màu xanh
   - Lists: Bullet hoặc Numbered lists
   - Tables: Format table trong Word

### Bước 4: Chèn code snippets
- Code blocks: Sử dụng font Courier New, màu xanh
- Inline code: Sử dụng font Courier New, background màu xám nhạt

---

## FORMATTING TRONG WORD

### Tiêu đề
- **Mục 1**: Heading 1 (Font size: 18pt, Bold)
- **Mục 2**: Heading 2 (Font size: 16pt, Bold)
- **Mục 3**: Heading 3 (Font size: 14pt, Bold)

### Code blocks
- Font: Courier New
- Size: 10pt
- Background: Màu xám nhạt (#F5F5F5)
- Border: 1pt solid gray

### Tables
- Header: Bold, background màu xám
- Borders: 1pt solid black
- Alignment: Center cho header, Left cho content

### Lists
- Bullet lists: Sử dụng bullet points
- Numbered lists: Sử dụng numbering
- Nested lists: Indent và sử dụng sub-bullets

---

## LƯU Ý

1. **Code blocks**: Cần format lại trong Word để dễ đọc
2. **Tables**: Cần tạo lại table trong Word
3. **Images**: Nếu có, cần chèn vào Word
4. **Page numbers**: Thêm page numbers nếu cần
5. **Table of contents**: Tạo table of contents tự động trong Word

---

## SCRIPT TỰ ĐỘNG (Nếu có Pandoc)

Tạo file `convert.sh`:
```bash
#!/bin/bash
pandoc BAO_CAO_SO_NGAU_NHIEN.md -o BAO_CAO_SO_NGAU_NHIEN.docx \
  --reference-doc=reference.docx \
  --toc \
  --number-sections
```

Chạy script:
```bash
chmod +x convert.sh
./convert.sh
```

---

**Lưu ý**: File markdown đã được format đầy đủ, chỉ cần convert sang .docx và format lại một chút trong Word là có thể sử dụng ngay.

