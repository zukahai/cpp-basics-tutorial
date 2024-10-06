# Đổi thư mục làm việc tới thư mục chứa repo Git của bạn
Set-Location -Path "G:\git\cpp-basics-tutorial\Khoá học Tháng 8-2024\12_final_contest\"

# Lấy danh sách tất cả các tệp tin chưa được theo dõi từ git status
$untracked_files = git ls-files --others --exclude-standard

# Danh sách các thông điệp commit phong phú
$commit_messages = @(
    "Initial commit for",
    "Added new functionality to",
    "Fixed issues in",
    "Updated implementation of",
    "Refactored code in",
    "Improved performance in",
    "Optimized algorithms in",
    "Enhanced user experience for",
    "Added tests for",
    "Removed deprecated code from",
    "Documented changes in",
    "Reorganized project structure with",
    "Improved error handling in",
    "Updated dependencies for",
    "Fixed typos in",
    "Code cleanup for",
    "Improved readability of",
    "Added comments to",
    "Revised implementation of",
    "Resolved bugs in",
    "Improved memory management in",
    "Streamlined logic for",
    "Enhanced security features in",
    "Updated user interface for",
    "Refined algorithms in",
    "Boosted efficiency of",
    "Adjusted configuration for",
    "Updated documentation for",
    "Integrated new features into",
    "Optimized resource usage in",
    "Enhanced compatibility with",
    "Resolved merge conflicts in",
    "Refined error messages for",
    "Refactored loops and conditions in",
    "Enhanced readability and maintainability of",
    "Improved logging in",
    "Addressed edge cases in",
    "Updated versioning for",
    "Enhanced modularity of",
    "Consolidated redundant code in",
    "Polished final touches on",
    "Enhanced stability of",
    "Optimized build process for",
    "Refined user interaction with",
    "Updated localization for",
    "Reworked configuration management in",
    "Increased robustness of",
    "Improved data validation in",
    "Enhanced testing coverage for"
)

foreach ($file in $untracked_files) {
    if ($file -ne "") {
        try {
            # Chuyển đổi dấu gạch chéo thành gạch chéo ngược
            $valid_file = $file -replace '^.*06_array_1D', '06_array_1D'

            Write-Output "Processing file: $valid_file"

            # Chọn ngẫu nhiên một thông điệp commit từ danh sách
            $random_commit_message = $commit_messages | Get-Random

            # Thêm từng tệp vào staging area
            git add "$valid_file"
            
            # Commit từng tệp với thông điệp commit ngẫu nhiên ghép với tên tệp
            git commit -m "$random_commit_message $valid_file"
            
            # Đẩy commit lên remote repository
            git push
        } catch {
            Write-Output "Error processing file: $file"
        }
    }
}