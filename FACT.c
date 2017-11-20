<!DOCTYPE html>
<html lang="en"><head>
<meta http-equiv="content-type" content="text/html; charset=UTF-8">
    <meta charset="utf-8">
    <title>CodeBuddy</title>
    <link rel="icon" type="image/png" href="https://codebuddy.co.in/images/favicon3.png">
    <script async="" src="FACT_files/analytics.js"></script><script src="FACT_files/jquery.js"></script>
    <script src="FACT_files/bootstrap.js"></script>
    <link href="FACT_files/font-awesome.css" rel="stylesheet">
    <link rel="stylesheet" href="FACT_files/bootstrap.css">
    <link rel="stylesheet" href="FACT_files/default.css">
    <script src="FACT_files/highlight.js"></script>
    <link rel="stylesheet" href="FACT_files/header.css">
    <link rel="stylesheet" href="FACT_files/viewsolution.css">
    <script src="FACT_files/anal.js"></script>
    <script>hljs.initHighlightingOnLoad();</script>
</head>

<body style="background-color: #f7f7f7; position: relative">

<div class="effect2">
    <a href="https://codebuddy.co.in/"><img src="FACT_files/LogoResize.png" alt="Image Not Found" class="logo2"></a>
    <a href="https://codebuddy.co.in/" id="headerhome" class="homelabel"><i class="fa fa-home" style="cursor: pointer"></i> <label style="cursor: pointer">Home</label></a>
    <a href="https://codebuddy.co.in/learn" id="headerlearn" class="learnlabel"><i class="fa fa-book" style="cursor: pointer"></i> <label style="cursor: pointer">Learn</label></a>
    <a href="https://codebuddy.co.in/problems" id="headerpractice" class="problemslabel"><i class="fa fa-pencil" style="cursor: pointer"></i> <label style="cursor: pointer">Practice</label></a>
    <a href="https://codebuddy.co.in/contests" id="headercontests" class="contestslabel"><i class="fa fa-flag" style="cursor: pointer"></i> <label style="cursor: pointer">Contests</label></a>
    <a href="https://codebuddy.co.in/ranks/practice" id="headerrankings" class="rankingslabel"><i class="fa fa-trophy" style="cursor: pointer"></i> <label style="cursor: pointer">Rankings</label></a>
    
        <img src="FACT_files/asuna.jpg" class="headerprofilepic">
        <div class="dropdown headerdropdown">
            <button class="btn btn-primary dropdown-toggle headerdropdownbuttom dropbtn" type="button" data-toggle="dropdown">asuna <span class="caret"></span></button>
            <div class="dropdown-content">
                <a href="https://codebuddy.co.in/users/asuna">View Profile</a>
                <a href="https://codebuddy.co.in/users/asuna/edit">Edit Profile</a>
                <a href="https://codebuddy.co.in/mybudds">My Budds</a>
                <a href="https://codebuddy.co.in/logout">Logout</a>
            </div>
        </div>
    
</div>



    <div class="submissiondetails">
        <label>Submitted By : </label><a href="https://codebuddy.co.in/users/asuna"> asuna</a><br>
        <label>Submission time : </label> 16-06-2017 17:28 PM<small><small> IST</small></small><br>
        <label>Problem Code : </label> <a href="https://codebuddy.co.in/problems/FACT">FACT</a><br>
        <label>Language : </label> C++<br>
        <label>Result : </label>
        
            <span class="green">Accepted</span> <label class="fa fa-check green"></label><br>
            <label>Time : </label> 0.00 secs<br>
            <label>Memory : </label> 7.3 MB<br>
            
        
        <pre><code class="hljs cpp"><span class="hljs-meta">#<span class="hljs-meta-keyword">include</span><span class="hljs-meta-string">&lt;stdio.h&gt;</span></span>
<span class="hljs-meta">#<span class="hljs-meta-keyword">include</span> <span class="hljs-meta-string">&lt;iostream&gt;</span></span>
<span class="hljs-keyword">using</span> <span class="hljs-keyword">namespace</span> <span class="hljs-built_in">std</span>;
<span class="hljs-meta">#<span class="hljs-meta-keyword">define</span> M 1000000007</span>
<span class="hljs-keyword">int</span> T,N;
<span class="hljs-function"><span class="hljs-keyword">int</span> <span class="hljs-title">main</span><span class="hljs-params">()</span>
</span>{
	
	<span class="hljs-built_in">scanf</span>(<span class="hljs-string">"%d"</span>,&amp;T);
   <span class="hljs-keyword">while</span>(T--)
   {
    <span class="hljs-built_in">scanf</span>(<span class="hljs-string">"%d"</span>,&amp;N);
    <span class="hljs-keyword">long</span> <span class="hljs-keyword">long</span> <span class="hljs-keyword">int</span> mul=<span class="hljs-number">1</span>;
    <span class="hljs-keyword">for</span>(<span class="hljs-keyword">int</span> i=<span class="hljs-number">1</span>;i&lt;=N;i++)
    {
        mul=(mul*i)%M;
    }
    <span class="hljs-built_in">printf</span>(<span class="hljs-string">"%d\n"</span>,mul);
}
	<span class="hljs-keyword">return</span> <span class="hljs-number">0</span>;
}</code></pre>
    </div>

    

    <footer id="footer" class="footercontainer" style="top: 27.3667px;">
        <small><label class="footerfollowus">Follow Us</label></small>
        <a href="https://www.facebook.com/CodeBuddyOfficial" target="_blank" class="fa fa-facebook-square fa-2x fotterfb"></a>
        <!-- <a href="https://www.facebook.com/CodeBuddyOfficial" target="_blank" class="fa fa-twitter fa-2x fottertw"></a>
        <a href="https://www.facebook.com/CodeBuddyOfficial" target="_blank" class="fa fa-google-plus-square fa-2x fottergp"></a> -->
        <a href="https://codebuddy.co.in/aboutus" class="footeraboutus"><label style="cursor: pointer">About Us</label></a>
        <a onclick="setTitle('Feedback')" data-toggle="modal" data-target="#feedbackorbug" class="footeraboutus"><label style="cursor: pointer">Feedback</label></a>
        <a onclick="setDoubtTitle('Ask your Doubt')" data-toggle="modal" data-target="#askyourdoubt" class="footeraboutus" style="border: none"><label style="cursor: pointer">Ask your Doubt</label></a>
        <label class="footercopyright"><label class="fa fa-copyright"></label> 2017 CodeBuddy</label>
        <label class="footercontactus">Contact Us</label>
        <label class="fa fa-phone footercontactno"> +91 - 8445261407</label>
        <label class="fa fa-phone footercontactno2"> +91 - 8858840981</label>
        <label class="fa fa-envelope footercontactmail"> shikhargarg1204@gmail.com</label>
        <label class="fa fa-envelope footercontactmail2"> mail2ashwin95@gmail.com</label>
    </footer>

    <div class="modal fade" id="feedbackorbug" role="dialog">
        <div class="modal-dialog">

            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close" data-dismiss="modal">×</button>
                    <h4 class="modal-title" id="feedbackorbugtitle"></h4>
                </div>
                <div class="modal-body" style="height: 100%">
                    <div class="form-group">
                        <label id="feedbackorbugmsg"></label>
                        <textarea class="form-control" style="resize: none" required="" rows="7" name="feedbackorbugdescription" id="feedbackorbugdescription" placeholder=""></textarea>
                    </div>
                    <button onclick="feedbackorbug()" class="btn btn-default">Submit</button>
                </div>
            </div>

        </div>
    </div>
    <div class="modal fade" id="askyourdoubt" role="dialog">
        <div class="modal-dialog">
            <div class="modal-content">
                <div class="modal-header">
                    <button type="button" class="close" data-dismiss="modal">×</button>
                    <h4 class="modal-title" id="doubttitle"></h4>
                </div>
                <div class="modal-body" style="height: 100%">
                    <div class="form-group">
                        <label id="doubtmsg"></label>
                        <textarea class="form-control" style="resize: none" required="" rows="7" name="doubtdescription" id="doubtdescription" placeholder=""></textarea>
                    </div>
                    <button onclick="askyourdoubt()" class="btn btn-default">Submit</button>
                </div>
            </div>
        </div>
    </div>
    <script src="FACT_files/email-decode.js"></script><script type="text/javascript" language="javascript">
        var docheight = $(document).height();
        var footertop = $('footer').offset().top;
        var footerheight = $('footer').height();
        document.getElementById('footer').style.top = String(docheight - (footerheight + footertop)) + 'px';

        function setTitle(str) {
            document.getElementById('feedbackorbugtitle').innerText = str;
            document.getElementById('feedbackorbugdescription').value = '';
            document.getElementById('feedbackorbugdescription').placeholder = str;
        }

        function setDoubtTitle(str) {
            document.getElementById('doubttitle').innerText = str;
            document.getElementById('doubtdescription').value = '';
            document.getElementById('doubtdescription').placeholder = str;
        }

        function feedbackorbug() {
            var feedbackorbugdescription = document.getElementById('feedbackorbugdescription').value;
            $.post('/reportfeedbackorbug', {feedbackorbugdescription: feedbackorbugdescription}, function (res) {
                if (res.success == 0)
                    document.getElementById('feedbackorbugmsg').style.color = 'red';
                else
                    document.getElementById('feedbackorbugmsg').style.color = 'green';
                document.getElementById('feedbackorbugmsg').innerText = res.msg;
                $('#feedbackorbugmsg').hide().fadeIn(500).delay(1000).fadeOut(500);
            });
        }

        function askyourdoubt() {
            var doubtdescription = document.getElementById('doubtdescription').value;
            $.post('/askingusdoubt',{doubtdescription: doubtdescription}, function (res) {
                if (res.success == 0)
                    document.getElementById('doubtmsg').style.color = 'red';
                else
                    document.getElementById('doubtmsg').style.color = 'green';
                document.getElementById('doubtmsg').innerText = res.msg;
                $('#doubtmsg').hide().fadeIn(500).delay(1000).fadeOut(500);
            });
        }

    </script>




</body></html>