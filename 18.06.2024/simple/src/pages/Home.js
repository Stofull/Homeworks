import React from 'react';

function Home() {
  return (
    <div className="bg-gray-50 dark:bg-gray-900 text-gray-900 dark:text-white">
      <header className="bg-white dark:bg-gray-800 shadow">
        <div className="max-w-7xl mx-auto py-6 px-4 sm:px-6 lg:px-8">
          <h1 className="text-3xl font-bold leading-tight text-gray-900 dark:text-white">Welcome to Flowbite</h1>
        </div>
      </header>
      <main className="max-w-7xl mx-auto py-6 sm:px-6 lg:px-8">
        <div className="px-4 py-6 sm:px-0">
          <div className="rounded-lg h-auto">
            <section className="mb-8">
              <h2 className="text-2xl font-bold mb-4">About Us</h2>
              <p>
                Flowbite is a comprehensive UI kit based on Tailwind CSS framework that provides a variety of components, templates, and pages to kickstart your project.
              </p>
              <p className="mt-4">
                Our goal is to help developers create beautiful and functional interfaces with minimal effort. Whether you're building a simple website or a complex web application, Flowbite has the tools you need.
              </p>
            </section>

            <section className="mb-8">
              <h2 className="text-2xl font-bold mb-4">Our Services</h2>
              <ul className="list-disc list-inside space-y-2">
                <li>
                  <strong>UI Components:</strong> A wide range of pre-designed components such as buttons, modals, and cards to speed up your development process.
                </li>
                <li>
                  <strong>Templates:</strong> Ready-to-use templates for various use cases like landing pages, dashboards, and e-commerce sites.
                </li>
                <li>
                  <strong>Customization:</strong> Easily customize the look and feel of your project with Tailwind CSS utility classes.
                </li>
                <li>
                  <strong>Support:</strong> Comprehensive documentation and support to help you get the most out of Flowbite.
                </li>
              </ul>
            </section>

            <section className="mb-8">
              <h2 className="text-2xl font-bold mb-4">Contact Us</h2>
              <p>
                If you have any questions or need assistance, feel free to reach out to us:
              </p>
              <ul className="list-disc list-inside mt-4 space-y-2">
                <li>
                  <strong>Email:</strong> support@flowbite.com
                </li>
                <li>
                  <strong>Phone:</strong> +1 234 567 890
                </li>
                <li>
                  <strong>Address:</strong> 1234 Flowbite St, Tailwind City, TW 12345
                </li>
              </ul>
            </section>

            <section className="mb-8">
              <h2 className="text-2xl font-bold mb-4">Testimonials</h2>
              <div className="space-y-4">
                <blockquote className="border-l-4 border-primary-600 pl-4 italic">
                  "Flowbite has transformed the way we develop our projects. The components are beautiful and easy to use."
                  <cite className="block mt-2 not-italic text-sm text-gray-500 dark:text-gray-400">- John Doe, Developer</cite>
                </blockquote>
                <blockquote className="border-l-4 border-primary-600 pl-4 italic">
                  "The templates provided by Flowbite saved us so much time and effort. Highly recommended!"
                  <cite className="block mt-2 not-italic text-sm text-gray-500 dark:text-gray-400">- Jane Smith, Project Manager</cite>
                </blockquote>
              </div>
            </section>
          </div>
        </div>
      </main>
    </div>
  );
}

export default Home;
