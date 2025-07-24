<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0" />
  <title>Hasil Technologies</title>
  <link href="https://cdn.jsdelivr.net/npm/tailwindcss@2.2.19/dist/tailwind.min.css" rel="stylesheet">
  <script src="https://unpkg.com/aos@2.3.1/dist/aos.js"></script>
  <link href="https://unpkg.com/aos@2.3.1/dist/aos.css" rel="stylesheet">
  <script>
    function toggleDarkMode() {
      document.documentElement.classList.toggle('dark');
    }
  </script>
</head>
<body class="bg-white dark:bg-gray-900 text-gray-800 dark:text-white">
  <!-- Header -->
  <header class="flex justify-between items-center p-6 shadow">
    <img src="logo.png" alt="Hasil Technologies Logo" class="h-10">
    <button onclick="toggleDarkMode()" class="bg-gray-200 dark:bg-gray-700 px-4 py-2 rounded">Toggle Dark Mode</button>
  </header>

  <!-- Hero Section -->
  <section class="text-center py-20 bg-gray-100 dark:bg-gray-800" data-aos="fade-up">
    <h1 class="text-4xl font-bold mb-4">Empowering Innovation with Technology</h1>
    <p class="mb-8 text-lg">Delivering smart, scalable, and sustainable tech solutions.</p>
    <a href="#contact" class="bg-blue-600 text-white px-6 py-3 rounded shadow hover:bg-blue-700">Get In Touch</a>
  </section>

  <!-- Services Section -->
  <section class="py-16 px-4" data-aos="fade-up">
    <h2 class="text-3xl font-bold text-center mb-12">Our Services</h2>
    <div class="grid grid-cols-1 md:grid-cols-3 gap-8">
      <div class="p-6 border rounded shadow">Web Development</div>
      <div class="p-6 border rounded shadow">Mobile App Development</div>
      <div class="p-6 border rounded shadow">Cloud Solutions</div>
    </div>
  </section>

  <!-- Testimonials -->
  <section class="bg-gray-100 dark:bg-gray-800 py-16" data-aos="fade-up">
    <h2 class="text-3xl font-bold text-center mb-10">What Our Clients Say</h2>
    <div class="text-center max-w-2xl mx-auto">
      <blockquote class="italic">"Hasil Technologies transformed our business with their innovative tech. Highly recommended!"</blockquote>
      <p class="mt-4 font-semibold">— Client Name</p>
    </div>
  </section>

  <!-- Contact -->
  <section id="contact" class="py-16 px-4" data-aos="fade-up">
    <h2 class="text-3xl font-bold text-center mb-10">Contact Us</h2>
    <form action="https://formspree.io/f/your-form-id" method="POST" class="max-w-xl mx-auto space-y-6">
      <input type="text" name="name" placeholder="Your Name" class="w-full p-3 border rounded" required>
      <input type="email" name="email" placeholder="Your Email" class="w-full p-3 border rounded" required>
      <textarea name="message" rows="4" placeholder="Your Message" class="w-full p-3 border rounded" required></textarea>
      <button type="submit" class="bg-blue-600 text-white px-6 py-3 rounded hover:bg-blue-700">Send Message</button>
    </form>
  </section>

  <!-- Footer -->
  <footer class="bg-gray-900 text-white text-center py-6">
    &copy; 2025 Hasil Technologies. All rights reserved.
  </footer>

  <!-- Floating WhatsApp Button -->
  <a href="https://wa.me/919999999999" target="_blank" class="fixed bottom-5 right-5 bg-green-500 text-white p-4 rounded-full shadow-lg text-xl z-50">
    💬
  </a>

  <script>
    AOS.init();
  </script>
</body>
</html>
